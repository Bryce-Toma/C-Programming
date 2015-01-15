#include <stdio.h>

int main()
{
    double price = 9.99, money;
    printf ("How much money do you have?:  ");
    scanf("%lf", &money);

    if (money >= price)     // You can place equal sign after > & < to make it greater/less than or equal
    {
         printf ("You can buy this car\n");
    }

    else
    {
        printf("You CANNOT buy this car");
    }
}
