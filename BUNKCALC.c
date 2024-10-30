#include <stdio.h>
int main() {
    char subject[50];
    int tc; //tc matlab total class

    printf("\n\t\t\t\tBUNK CALCULATOR\n\n");
    printf("\t\t\4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4\n");
    printf("\t\t\4\t\t\t\t\t\t\4\n");
    printf("\t\t\4\t\t\t\t\t\t\4\n");
    printf("\t\t\4\tWELCOME TO BUNK CALCULATOR\t\t\4\n");
    printf("\t\t\4\t\t\t\t\t\t\4\n");
    printf("\t\t\4\t\t\t\t\t\t\4\n");
    printf("\t\t\4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4\n");

    // Input  from user subject name
    printf("Enter the subject name: ");
    scanf("%s", subject);

    // Input total number of classes(Subject teacher se pucho)
    printf("Enter the total number of classes: ");
    scanf("%d", &tc);

    // Calculate the maximum number of classes that can be missed and bunked for each percentage
    int mcm_95 = tc - (tc * 0.95);
    int mcm_90 = tc - (tc * 0.90);
    int mcm_85 = tc - (tc * 0.85);
    int mcm_80 = tc - (tc * 0.80);
    int mcm_75 = tc - (tc * 0.75);

    // output
    printf("Subject: %s\n", subject);
    printf("Total Classes: %d\n", tc);
    printf("You can miss/ bunk a maximum of:\n");
    printf("- %d classes for attendance above 95%%\n", mcm_95);
    printf("- %d classes for attendance above 90%%\n", mcm_90);
    printf("- %d classes for attendance above 85%%\n", mcm_85);
    printf("- %d classes for attendance above 80%%\n", mcm_80);
    printf("- %d classes for attendance above 75%%\n", mcm_75);

    printf("\n\t\t\t\t    Thank you! \n");
    printf("\t\t\t   FOR USING BUNK CALC\n");
    printf("\t\t\t    www.BUNKMATKAROFAILHOJAOGE.com\n");


    return 0;
}
