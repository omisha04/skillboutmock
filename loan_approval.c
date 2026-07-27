#include <stdio.h>

int main()
{
    float salary;
    int cs;
    int age;
    
    printf("Enter salary:");
    scanf("%f",&salary);
    printf("Enter credit score:");
    scanf("%d",&cs);
    printf("Enter age:");
    scanf("%d",&age);
    if(salary>=30000 && cs>=750 && age>=21){
        printf("Loan is approved..");
    } else {
        printf("Loan is rejected..");
    }
   
    return 0;
}