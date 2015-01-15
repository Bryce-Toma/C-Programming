#include <stdio.h>

int main()
{
    int number1 = 5;
    int number2 = 2;
    printf("Given %d and %d = \n", number1, number2);   //add
    int add = number1 + number2 ;
/*  The computer adds number1 and number 2
    and STORES it into sum  */
    printf("Sum:  %d\n", add);

    int sub = number1 - number2 ;  //subtract
    printf("Diff: %d\n", sub);

    int mult = number1 * number2 ;  //multiply
    printf("Prod: %d\n", mult);

    double div = (double)number1 / number2 ;  //division
/* Casting: Specify the desired variable's
 type is declared as "double" in parentheses.
 At least one or both of these variable has to
  be double to take into the count the decimal. */
    printf("Quot: %lf\n", div);

    int whole_div = number1 / number2 ;  //integer division
    int remainder = number1 % number2 ;  // percentage op gives us remainder
    printf("QuoR: %d R %d\n\n", whole_div, remainder);

// Increment
    int x = 5;
    printf("Increment: %d -->", x);
    x = x + 1; // x is now 6
    printf(" %d \nIncrement: %d --> ", x, x);
    /* take the number x, add one to it,
     and make it x. Increment it. OR you can do
     this to increment it. */
    x++ ; // x is now 7
    printf("%d \n\n", x);
    /* "x = x + 1" is the same thing as "x++".
    Think of x = x + 1 as x + 1 first then
    storing it in the x, the syntax of C just
     makes it seem that we store before we add,
     BUT in fact, we add before we store.*/

// Decrement
    int y = 7 ;
    printf("Decrement: %d -->", y);
    y = y - 1 ; // y is now 6
    printf("%d \nDecrement: %d -->", y, y);
    y--;    // y is not 5
    printf("%d\n", y);

//Increment then Decrement
    int z = -2;
    printf("Z:  %d\n", z);
    z++ ;
    printf("Z:  %d\n", z);
    z++ ;
    printf("Z:  %d\n", z);
    z++ ;
    printf("Z:  %d\n", z);
    z-- ;
    printf("Z:  %d\n", z);
    z-- ;
    printf("Z:  %d\n", z);
    z-- ;
    printf("Z:  %d\n\n", z);

    return 0;

}
