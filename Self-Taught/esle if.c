#include <stdio.h>

int main()
{
    int number;

    printf("Enter a number:  ");
    scanf("%d", &number);  // forgot ampersign and it caused a great error!

    if (number > 100)
    {
        printf("Number is greater than 100");
    }

    else if(number > 90)
    {
        printf("Number is greater than 90");
    }

    else if(number > 80)
    {
        printf("Number is greater than 80");
    }

    else if(number > 70)
    {
        printf("Number is greater than 70");
    }

    else if(number > 60)
    {
        printf("Number is greater than 60");
    }

    else if(number > 50)
    {
        printf("Number is greater than 50");
    }

    else
    {
        printf("Number is less than 50");
    }

}
