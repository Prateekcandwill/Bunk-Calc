import tkinter as tk
from tkinter import messagebox

def calculate_bunks():
    subject = subject_entry.get()
    try:
        total_classes = int(total_classes_entry.get())
        
        # Calculate the maximum number of classes that can be missed
        mcm_95 = int(total_classes - (total_classes * 0.95))
        mcm_90 = int(total_classes - (total_classes * 0.90))
        mcm_85 = int(total_classes - (total_classes * 0.85))
        mcm_80 = int(total_classes - (total_classes * 0.80))
        mcm_75 = int(total_classes - (total_classes * 0.75))

        # Display the results
        result_text = (
            f"Subject: {subject}\n"
            f"Total Classes: {total_classes}\n"
            "You can miss/ bunk a maximum of:\n"
            f"- {mcm_95} classes for attendance above 95%\n"
            f"- {mcm_90} classes for attendance above 90%\n"
            f"- {mcm_85} classes for attendance above 85%\n"
            f"- {mcm_80} classes for attendance above 80%\n"
            f"- {mcm_75} classes for attendance above 75%"
        )
        
        messagebox.showinfo("Bunk Calculator Result", result_text)
    except ValueError:
        messagebox.showerror("Input Error", "Please enter a valid number for total classes.")

# Create the main window
root = tk.Tk()
root.title("Bunk Calculator")

# Create and place the widgets
tk.Label(root, text="BUNK CALCULATOR", font=("Arial", 16)).pack(pady=10)

tk.Label(root, text="Enter the subject name:").pack(pady=5)
subject_entry = tk.Entry(root)
subject_entry.pack(pady=5)

tk.Label(root, text="Enter the total number of classes:").pack(pady=5)
total_classes_entry = tk.Entry(root)
total_classes_entry.pack(pady=5)

calculate_button = tk.Button(root, text="Calculate Bunks", command=calculate_bunks)
calculate_button.pack(pady=20)

# Run the application
root.mainloop()
