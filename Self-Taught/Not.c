/* Logic terms... logic operators (And, Or, Not)
Allows to negate a condition... express the opposite
If (not(x < 40))

And - && (represented by two ampersands)
Or  - ||  (represented by two pipes)
Not - ! (Single exclamation mark) Flip to give opposite !=

*/


#include <stdio.h>

int main()
{
    printf("Give a rational value to Item1.\nItem1 = ");
    double item1;
    scanf("%lf", &item1);
    double item2 = 5.30;
    double item3 = 2.50;

    if (!(item1 < item2)) /* item1 is not less than item2 */
    {
        printf("Item1 is not less than Item2\n");
    }
    if(!(item1 < item2 && item1 < item3)) /* item1 is not less than items 2 and 3 */
    {
        printf("Item1 is the greatest of them all\n");
    }
    else
    {
        printf("Item1 is the smallest of them all\n");
    }
    return 0;

}
