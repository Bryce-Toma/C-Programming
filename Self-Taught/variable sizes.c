/* The integer is a variable type that holds whole numbers.
    There is a limit and a variable can only hold numbers
    from approx. +2 billion to -2 billion. To extend size
    we use "long int" and "%ld"
    OR "long long int" and "%lld" */

#include <stdio.h>
int main()
{
    long int longInt = 4000000000; // so large it causes int to roll over to negative size
    long long int longlongInt = 4000000000; // stored correctly using long long int

    printf("%ld \n", longInt);     // remove warnings using "ll" (long long), "L"(long), or "u" (unsigned) right of 4 billion
    printf("%lld \n", longlongInt); // long long is max. But you can make it unsigned, and doubles by making negative restriction positive

    unsigned int NumStars = 3141592654;
    printf("Number of Stars: %u  \n", NumStars); // can't store any negative numbers


    unsigned long long int numberofstars = 10;
    printf("Number of Stars...for realsies: %llu \n", numberofstars);

    signed int numofstars = 100;
    printf("Number of Stars...jk: %d \n", numofstars); //signed bit is usually given but can specify. Notice: it's still "%d"

/*If knowing you're using a small number number and you don's want to waste as much space.
Then you can declare integers as short to save memory and processing
since using computer, you don't have to... but for embedded systems
and where memory is in a confined space like a phone, it can be helpful */

    short int numofeyes = 2;
    printf("Number of Eyes: %d \n", numofeyes);


    return 0;

}


