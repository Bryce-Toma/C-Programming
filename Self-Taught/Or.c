/* Last time, with AND, AND joined two conditions in an if statement
Both things had to be true in order to perform an action.
OR allows us to perform an action if at least one condition is true.
As long as one of the multiple conditions are true, we can perform the action.
It doesn't need both.

ATM Machine
Can withdraw if...
    - Divisible by 20
    - Within the withdraw limit
        + Saving Account
        OR
        + Checking Accounts ... has enough money
otherwise transaction is denied
*/

#include <stdio.h>
int main()
{
    int savings = 200; // the most one can withdraw
    int checking = 400;
    int TotWithdraw; // how much money they wish to withdraw

    printf("How much money do you wish to withdraw: \n$");
    scanf("%d", &TotWithdraw);

    if (TotWithdraw %20 == 0 && (TotWithdraw <= savings || TotWithdraw <= checking))// if (divisible by 20 && (savings has enough money or checking enough money))
    { // || is the OR command , and && is the AND command

        if (TotWithdraw <= savings)
        {
            savings = savings - TotWithdraw;
            printf("The money has been withdrawn from you Savings Account\n");
        }
        else
        {
            checking = checking - TotWithdraw;
            printf("The money has been withdrawn from you Checking Account\n");
        }

    }

    else

    {
        printf("Transaction Denied\n");
    }

    printf("Remaining Balance:\nSavings:$%d\nChecking:$%d\n", savings, checking);

    return 0;
}
