/*worked out problem: 6.9*/
/*calculate root of five numbers using goto statement*/

#include<stdio.h>
#include<math.h>
int main() /*start of main function*/
{
    double n,r; /*variable*/
    int count=1;

    printf("Enter the five value in a row:\n"); /*prompt*/

again:
    printf("\nValue of number %d: ",count); /*prompt*/
    scanf("%lf",&n); /*taking value*/

    if(n>=0)
    {
        r=sqrt(n); /*calculate root*/
        printf("Root of %lf is = %.3lf\n",n,r); /*display result*/
    }
    else
    {
        printf("Value of number %d is negative\n",count);
    }
    count++;
    if(count<=5)
    {
        goto again;
    }
    else
    {
        printf("\nEnd of computation\n");
    }

    return 0;
} /*end of main function*/
