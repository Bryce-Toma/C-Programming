/* While Loop

Loops = Loops allow you to repeat code, without copying and pasting.
While loops repeat and allows us to do something, _while_ something is true
In other, as along as something is true, execute command

*/
// ADDER Program //
/* While Loops */
#include <stdio.h>
int main()
{
    printf("Welcome to my handy-dandy adder\n");
    int num1, num2;
    int sum;

    int answer; //whether you like to add something


    printf("Would you like to add something?\n");
    printf("1 - yes\n");
    printf("2 - no\n");
    scanf("%d", &answer);

    while (answer == 1 ) // No semicolon after if statement
    {
        printf("Enter a number: ");
        scanf("%d", &num1);

        printf("And another: ");
        scanf("%d", &num2);

        //calculate the answer
        sum = num1 + num2;

        printf("The sum is %d\n", sum);

        printf("Would you like to add another two numbers?\n");
        printf("1 - yes\n");
        printf("2 - no\n");
        scanf("%d", &answer);

    }

        printf("Exiting...\n");
}
