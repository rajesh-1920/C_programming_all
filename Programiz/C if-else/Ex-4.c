/*Example-4: Nested if...else*/
/*Compare between two integers*/

#include <stdio.h>
int main() /*start of main function*/
{
    int number1, number2; /*variable*/

    printf("Enter two integers:\n"); /*prompt*/
    scanf("%d %d",&number1,&number2); /*taking value*/

    if(number1 >= number2) /*checking is the numbers are equal or 1st number is large*/
    {
        if(number1 == number2) /*checking is the numbers are equal*/
        {
            printf("Result: %d = %d\n",number1,number2); /*showing result when numbers are equal*/
        }
        else
        {
            printf("Result: %d > %d\n",number1,number2); /*showing result when first number is large*/
        }
    }
    else
    {
        printf("Result: %d < %d\n",number1,number2); /*showing result when second number is large*/
    }

    return 0;
} /*end of main function*/
