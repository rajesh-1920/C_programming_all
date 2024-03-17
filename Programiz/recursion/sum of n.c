#include<stdio.h>

long long int sum(long long int s);
long long int fact(long long int x);

int main(void)
{
    long long int n;
    scanf("%lld",&n);
    printf("Factorial of %lld = %lld\n",n,fact(n));
    printf("Sum of %lld integers = %lld\n",n,sum(n));
}

long long int sum(long long int s)
{
    if(s==0)
    {
        return s;
    }
    else
    {
        return s+sum(s-1);
    }
}
long long int fact(long long int x)
{
    if(x==1)
    {
        return x;
    }
    else
    {
        return x*sum(x-1);
    }
}
