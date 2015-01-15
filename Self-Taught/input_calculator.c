#include <stdio.h>

int main()
{
    double number1, number2;

    printf ("Enter a number: ");
    scanf("%lf", &number1); //waiting for a long type
    printf ("Enter another number: ");
    scanf("%lf", &number2);


    printf("%lf + %lf = %.3lf\n", number1, number2, number1 + number2);
    printf("%lf - %lf = %.3lf\n", number1, number2, number1 - number2);
    printf("%lf * %lf = %.3lf\n", number1, number2, number1 * number2);
    printf("%lf / %lf = %.3lf\n\n\n", number1, number2, number1 / number2);

/*The actual evaluation, this time, is right inside the printf statement
we are skipping a step, and not using another variable to hold the answer.
We are simply doing the calculation right inside the printf statement
before it is printed out. The evaluation is the " number1 +*-/ number2" */

    double numberA, numberB;

    printf ("Enter two numbers: ");
    scanf("%lf%lf", &numberA, &numberB); //waiting for a long type

    printf("%lf + %lf = %.3lf\n", numberA, numberB, numberA + numberB);
    printf("%lf - %lf = %.3lf\n", numberA, numberB, numberA - numberB);
    printf("%lf * %lf = %.3lf\n", numberA, numberB, numberA * numberB);
    printf("%lf / %lf = %.3lf\n", numberA, numberB, numberA / numberB);


    return 0;
}
