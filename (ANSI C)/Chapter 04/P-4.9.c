/*p-4.9*/
/*calculate sum of digits of a number*/

#include<stdio.h>
int main() /*start of main function*/
{
    int n,s=0; /*variable*/

    printf("Enter the number: "); /*prompt*/
    scanf("%d",&n); /*taking the number */

    while(n>0) /*find digits*/
    {
        s=s+(n%10); /*calculate sum of the digits*/
        n=n/10;
    }
    printf("Sum = %d\n",s); /*showing sum*/

    return 0;
} /*end of main function*/
