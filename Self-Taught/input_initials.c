#include <stdio.h>

int main()
{
    char First, Mid, Last, newline;
    printf ("Enter your three initials: ");
    scanf("%c%c%c%c", &First, &Mid, &Last, &newline);
    printf("To verify, your initals %c%c%c.\n", First, Mid, Last);
    // if statement with Yes or No and using scanf
     printf ("Enter your three friend's initials: ");
    scanf("%c%c%c%c", &First, &Mid, &Last, &newline);
    printf("To verify, your friend's initials %c%c%c.\n", First, Mid, Last);
    return 0;

}
