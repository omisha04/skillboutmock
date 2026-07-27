
#include <stdio.h>

int main()
{
    float salary;
    float hra;
    float da;
    float tax;
    
    printf("Enter salary:");
    scanf("%f",&salary);
    printf("Enter House rent allowance: ");
    scanf("%f",&hra);
    printf("Enter Dearness allowance: ");
    scanf("%f",&da);
    printf("Enter tax: ");
    scanf("%f",&tax);
    float gross= salary+hra+da;
    float net=gross-tax;
    printf("----- SALARY SUMMARY -----\n");
    printf("Gross Salary : %.2f\n",gross);
    printf("Net Salary: %.2f\n",net);
     printf("--------------------------\n");

    return 0;
}