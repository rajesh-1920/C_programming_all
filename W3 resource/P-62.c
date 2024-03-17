/*p-62*/
/*sum of the digits of a number*/

#include<stdio.h>

int main() /*main function start*/
{
    int n=0,s=0; /*variable*/

    printf("Input the number: "); /*prompt*/
    scanf("%d",&n); /*taking number*/

    if(n>=1&&n<500)
    {
        while(n!=0)
        {
            s=s+(n%10); /*find the digits and calculate sum*/
            n=n/10; /*decrease last digit*/
        }
        printf("\nThe total of the digits is = %d\n",s); /*showing result*/
    }
    else
    {
        printf("\nOut of range."); /*showing error*/
    }

    return 0;
}/*End of main function*/
