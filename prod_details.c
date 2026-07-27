#include <stdio.h>

int main()
{
    char prod_name[30];
    float price;
    float discount;
    int quantity;
    
    printf("Enter Product name:");
    scanf("%s",prod_name);
    printf("Enter Price: ");
    scanf("%lf",&price);
    printf("Enter Discount: ");
    scanf("%lf",&discount);
    printf("Enter Stock quantity: ");
    scanf("%d",&quantity);
    printf("----- PRODUCT DETAILS -----\n");
    printf("Product : %s\n",prod_name);
    printf("Price: $%lf\n",price);
    printf("Discount: %lf\n",discount,"%");
    printf("Stock: %d\n",quantity);
     printf("--------------------------\n");

    return 0;
}