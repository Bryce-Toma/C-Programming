/* Input allows user to make changes to the program
 while it is running. We allow input so that the user
can allow the program to do different things.

Let the user type in data
Output can change depending on what the user inputs */

#include <stdio.h>
int main()
{
    printf("Enter your age: ");

    int age; // holds the user's age
    scanf("%d", &age) ; //scanning something in from the keyboard
    printf("Your age is %d\n", age);

    printf("Enter your friend's age: ");

    scanf("%d", &age); // overwrites...changes the value of age. So it prints something different.
    printf ("Your friend's age is %d \n", age);
    return 0;

/*We want the user to change these number, so output is different
So we are going to add a scanf statement, instead of a  printf,
we are scanning in something from the keyboard... the input that
the user as entered and the scanf starts the same way as a printf would.
In the double quote we specify what type of data we want.
We want an integer, so we use %d. Now we need to know the variable the
integer is stored in. We write a corresponding variable. There is one
 difference and we need to be an ampersign &, and it turns it into a reference
And we will learn what a  reference when we go over pointers. The ampersign
 allows the scanf to change the value of the variable what ever the user enters */

}


