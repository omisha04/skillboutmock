
#include <stdio.h>

int main()
{
    int age;
    
    printf("Enter age:");
    scanf("%d",&age);
    if(age<13){
        printf("Kids");
    }else if(age>13 && age<=17){
        printf("Teen");
    }else if(age>18 && age<=100){
       printf ("Adult");
    }
    
    
    return 0;
}