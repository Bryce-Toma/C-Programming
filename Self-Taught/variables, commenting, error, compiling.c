#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("How old is this piece of bread?\n"); // Prints text to the screen

    int age;
    age = 19;
    printf("Age: %d days old\n", age); // percentage sign tells that variable be here

    /*  %d  int
        %c  char
        %f  float
        %lf long float or double
    */

    double price;
    price = 9.99;
    printf("Price: %lf dollars\n", price);

    char first = 'B' ; // single quotes denotes it's a single character
    printf("First Letter of item: %c", first);

    printf("\n\nHow much are these cans of soup?\n"); // indentations
    float s_price = 7.50;
    int quantity = 6;
    printf("Price: %f dollars per %d can(s)\n", s_price, quantity);


    return 0;
}
