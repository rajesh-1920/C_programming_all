#include<stdio.h>
int main(void)
{
    long long int n,t;
    scanf("%lld",&n);
    if(n%2==0)
    {
        t=1;
    }
    else
    {
        t=2;
    }
    printf("%lld\n",t);
}
