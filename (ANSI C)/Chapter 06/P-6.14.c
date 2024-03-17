/*p-6.14*/
/*checking prime number*/

#include<stdio.h>
int main() /*start of main function*/
{
    int i,j,n,c=0; /*variable*/

    printf("Enter the integer: "); /*prompt*/
    scanf("%d",&n); /*taking the integer*/


    for(j=2;j<=n-1;j++)
    {
        if(n==2)
        {
            printf("prime number.\n"); /*display result*/
            break;
        }
        if(n%j==0)
        {
            c++;
            break;
        }
    }

    if(c==0)
    {
        printf("prime number.\n"); /*display result*/
    }
    else
    {
        printf("Not prime number.\n"); /*display result*/
    }

    return 0;
} /*end of main function*/
