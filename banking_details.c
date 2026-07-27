#include <stdio.h>

int main()
{
    char name[30];
    long int acc_no;
    float balance;
    int mobile_no;
    char ifsc[30];
    
    printf("Enter name:");
    scanf("%s",name);
    printf("Enter account no: ");
    scanf("%ld",&acc_no);
    printf("Balance: ");
    scanf("%f",&balance);
    printf("Enter mobile no: ");
    scanf("%d",&mobile_no);
    printf("Enter IFSC code: \n");
    scanf("%s",ifsc);
    printf("--------------------------\n");
    printf("      ---SBI BANK---      \n");
    printf("--------------------------\n");
    printf("Name : %s\n",name);
    printf("Account no: %ld\n",acc_no);
    printf("Balance: %f\n",balance);
    printf("Mobile no: %d\n",mobile_no);
    printf("IFSC code: %s\n",ifsc);

    return 0;
}