/*Example-3 if...else ladder*/
/*Compare between two integers*/

#include <stdio.h>
int main() /*start of main function*/
{
    int number1, number2;/*variable*/

    printf("Enter two integers:\n"); /*prompt*/
    scanf("%d %d",&number1,&number2); /*taking value*/

    if(number1==number2) /*checking is the numbers are equal*/
    {
        printf("Result: %d = %d\n",number1,number2); /*showing result when numbers are equal*/
    }
    else if(number1>number2) /*checking large number*/
    {
        printf("Result: %d > %d\n", number1,number2); /*showing result when first number is large*/
    }
    else
    {
        printf("Result: %d < %d\n",number1,number2); /*showing result when second number is large*/
    }

    return 0;
} /*end of main function*/
