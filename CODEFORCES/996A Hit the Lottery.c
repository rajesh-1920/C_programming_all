#include<stdio.h>
int main(void)
{
    long long int n,t=0;
    scanf("%lld",&n);
    t=t+n/100;
    n=n%100;
    t=t+n/20;
    n=n%20;
    t=t+n/10;
    n=n%10;
    t=t+n/5;
    n=n%5;
    t=t+n;
    printf("%lld\n",t);
}
