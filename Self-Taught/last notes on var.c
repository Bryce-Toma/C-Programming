/*      TOPICS
    - Case sensitivity
    - Declarative shortcuts
    - Printing decimals
    - Order of operations

CASE SENSITIVITY
- variables of different cases are different variables
- x is different from X

DECLARATION SHORTCUT
- if you have multiple variables that are the same type and
you want to declare at the same time, you can do so on one line

    */

#include <stdio.h>

int main()
{
    int cats = 1, dogs = 2 , fish = 3;
    printf("Cats: %d \nDogs: %d \nFish: %d \n", cats, dogs, fish);



/* PRINTING DECIMALS */


    double tax = 0.13;
    double price = 5.12;

    double total = price * tax + price;

    printf("Total: $%lf\n", total);
    printf("Total: $%.2lf\n", total);  // To round to 2 dec. place we put ".2" after the % sign

/* ORDER OF OPERATIONS

1) Brackets
2) Multiplication and Division
3) Addition and Subtraction

C uses the same rules as PEMDAS */

    double item1 = 5.65;
    double item2 = 4.32;
    double item3 = 6.42;

    double TAX = 1.13;

    double tot = (item1 + item2 + item3) * TAX ;
    printf ("Total: $%.2lf\n", tot);


       return 0;
}
