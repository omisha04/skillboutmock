#include <stdio.h>
void add(int x,int y){
    printf("Addition: %d\n", x+y);
}
void sub(int x,int y){
    printf("Substraction: %d\n", x-y);
}
void multi(int x,int y){
    printf("Multiplication: %d\n", x*y);
}
void divi(int x,int y){
    printf("Division: %d\n", x/y);
}

int main()
{
    int a,b;
    int choice;
    
    printf("1.Addition:\n" );
    printf("2.Substraction:\n" );
    printf("3.Multiplication:\n" );
    printf("4.Division:\n" );
    printf("Enter choice:\n");
    scanf("%d",&choice);
     printf("Enter the values of a and b: \n");
    scanf("%d %d",&a,&b);
    switch(choice){
        case 1:
        add(a,b);
        break;
        case 2: 
        sub(a,b);
        break;
        case 3:
        multi(a,b);
        break;
        case 4:
        divi(a,b);
        default:
        printf("Enter only integers...");
        break;
    }
    
    return 0;
}