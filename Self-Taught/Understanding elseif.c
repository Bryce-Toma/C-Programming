/* Else if = let's us chain together if statements,
so that we can check a condition,
and if that's not true check another condition,
and if that's not true check another condition,
until you find one that matches,
or you find that none of them match,
 and you can do a final nothing worked.


*/
#include <stdio.h>

int main()
{
    int number;

    printf("Enter your favorite number:  ");
    scanf("%d", &number);  // forgot ampersign and it caused a great error!

    if (number > 9000)
    {
        printf("It's OVER 9000! D:");
    }
    else if (number > 100)
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

    else if(number > 40)
    {
        printf("Number is greater than 40");
    }

    else if(number > 30)
    {
    printf("Number is greater than 30");
    }
    else if(number > 20)
    {
        printf("Number is greater than 20");
    }
    else if(number >= 10)
    {
        printf("Number is greater than or equal to 10");
    }
    else if (number >= 0)
    {
        printf("You number is a single digit number.");
    }
    else
    {
        printf("You number is negative.");
    }

}
