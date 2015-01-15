/* IF STATEMENTS
Decision making...computers can make decisions using logic.
The computer is very specific on the condions when making decisions
*/

#include <stdio.h>

int  main ()
{
    int age;
    printf("What is your age?  ");
    scanf ("%d", &age);

    if (age > 18)
    {
        printf ("You are allowed to view this site.\n");
    }


    if (age == 18) // == says that we compare these two things. = sets or assigns the value
    {
        printf ("You are allowed to see this site.\n");
    }


/*If the age is equal to 18, then it will go inside these braces
 and execute the command, however if the condition is not met it
  skips the command and goes to the return statement*/


    if (age < 18)
    {
        printf ("You can NOT allowed to see this site!!!\n");
    }


    if (age >= 21)  // instead of making separate statements, you can do this. >= or <=
    {
        printf ("You are allowed to drink.\n");
    }
    else
    {
        printf("You cannot drink!\n");
    }


    int dage;
    printf("How old is your dad?  ");
    scanf ("%d", &dage);

    if (dage > age) // == says that we compare these two things. = sets or assigns the value
    {
        printf ("Your dad is older.\n");
    }
     else
     {
        printf ("That's NOT your dad!!!\n");
    }

    return 0;

}
