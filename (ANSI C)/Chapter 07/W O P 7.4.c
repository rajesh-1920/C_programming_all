#include<stdio.h>
int main(void)
{
    int num1,num2,fib,n,i;
    printf(" Enter the value of n:");
    scanf("%d",&n);
    num1=0;
    num2=1;
    for(i=0; i<n-2; i++)
    {
        fib=num1+num2;
        num1=num2;
        num2=fib;
    }
    printf("\n nth fibonacci number (for n = %d ) = %d\n",n,fib);
}
