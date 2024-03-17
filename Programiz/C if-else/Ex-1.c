/*Example-1 if statement*/
/*Program to display a number if it is negative*/

#include <stdio.h>
int main() /*start main function*/
{
    int number; /*variable*/

    printf("Enter an integer: "); /*prompt*/
    scanf("%d",&number); /*taking the number*/

    if(number<0) /*checking the condition of negative number*/
    {
        printf("You entered %d.\n",number); /*showing result when the number is negative*/
    }
    printf("The if statement is easy.\n"); /*display*/

    return 0;
} /*end of main function*/
