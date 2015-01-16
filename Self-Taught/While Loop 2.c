#include<stdio.h>

int main()
{
    int totGrade = 0;
    int numOfGrade = 0;

    int currGrade;

    double average;
    printf("Welcome to our grade average calculator.\n");
    printf("Enter grades and enter '-1' when done:\n");

    scanf("%d", &currGrade);

    while(currGrade != -1)
    {
        totGrade = totGrade + currGrade;
        numOfGrade++; // increment number of marks

        scanf("%d", &currGrade);
    }
    if(numOfGrade > 0)
    {
        average = (double)totGrade / numOfGrade;
        printf("The average is %lf\n", average);
    }
    else
    {
        printf("You did not enter any grades.\n");
    }
    return 0;
}
