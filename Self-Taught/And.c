/* And
Allows us to merge conditions (if statements) into one and allows us to check for two things,
and that the are both true. They both have to happen or be true to execute
what's inside. If you wanted to check two conditions at the same time
Allows us to do multiple if-statement checks


ATM Machine
Allowed withdrawal if
divisible by 20 and under the set limit, because our ATM
only spits outs twenties. If you want 50 dollars...
Too bad! You can either withdraw $40 or $60! :P
*/

#include <stdio.h>

int main()
{
    int limit = 200; //the most one can withdraw
    int toWithdraw; //how much the use want to withdraw

    printf("How much do you wish to withdraw:\n$");
    scanf("%d", &toWithdraw);

    //insert with draw check here
    //(%) modulus operator gives us the remainder of a division or percentage sign (mod)

    // && (and)

    if(toWithdraw <= 200 && toWithdraw % 20 == 0 && toWithdraw > 0)
    {
        printf("Here is your money.\n");
    }    else
    {
        printf("Invalid transaction.\n");
    }



    return 0;
}
