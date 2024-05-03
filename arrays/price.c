#include<stdio.h>

int main()
{
    int price[3];
    printf("\nEnter the price of the 1st item: ");
    scanf("%d", &price[0]);
    printf("\nEnter the price of the 2nd item: ");
    scanf("%d", &price[1]);    
    printf("\nEnter the price of the 3rd item: ");
    scanf("%d", &price[2]);

    price[0]=price[0]+(0.18*price[0]);
    price[1]=price[1]+(0.18*price[1]);
    price[2]=price[2]+(0.18*price[2]);

    printf("The final price of the products is : %d %d %d", price[0], price[1], price[2]);
    return 0;
}