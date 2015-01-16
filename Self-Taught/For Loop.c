/* For Loops

While Loops = Loop as long as the condition we set up is true,
and it loops the content in its body, once it's false, it will leave the body.

While loops are great  for when you don't know how many times you wish to loop
If you know the number of times you want to loop, it's better and cleaner to use a FOR loop.

FOR loop is a loop with a counter.
When you enter the loop you know hoe many times to loop
*/
#include<stdio.h>

int main()
{
    int counter = 0; //initialization and declaration of variable

    while(counter < 10) // count up to ten // condition
    {
        printf("Hello.\n"); // main block

        counter++; //counter = counter + 1; increments counter by one //afterthought
    }

    for (counter = 0 ; counter < 10 ; counter++) // for(initialization;condition;counter)
    {
        printf("%d\n", counter);
    }


    int numToCount = 0;

    printf("What do you want to count to?:  ");
    scanf("%d", &numToCount);

    for (counter = 0 ; counter < 10 ; counter++) // for(initialization;condition;counter)
    {
        int sum = counter + 1;

        printf("%d\n", sum);
    }


    return 0;

}
