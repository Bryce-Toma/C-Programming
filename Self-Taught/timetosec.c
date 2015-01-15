#include <stdio.h>

int main ()
{
    printf("Welcome to the time to second converter!\n");

    int minutes, seconds, totalSec;

    printf("Enter in your minutes:seconds you want to convert.\n");
    scanf("%d : %d", &minutes, &seconds);

    totalSec = seconds + (minutes * 60);

    printf("%d : %d is %d seconds.\n", minutes, seconds, totalSec);

    return 0;

}
