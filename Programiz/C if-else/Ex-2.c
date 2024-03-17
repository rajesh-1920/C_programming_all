/*Example-2 if-else statement*/
/*Check whether an integer is odd or even*/

#include <stdio.h>
int main() /*main function start*/
{
    int number; /*variable*/

    printf("Enter an integer: "); /*prompt*/
    scanf("%d",&number); /*taking value*/

    if(number%2==0) /*checking condition if 0 then even */
    {
        printf("%d is an even integer.\n",number); /*showing result when even*/
    }
    else
    {
        printf("%d is an odd integer.\n",number); /*showing result when odd*/
    }
    return 0;
} /*end of main function*/
