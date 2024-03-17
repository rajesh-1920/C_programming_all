#include<stdio.h>
int main(void)
{
    long long int t,n,r;
    scanf("%lld",&t);
    for(k=0; k<t; k++)
    {
        r=0;
        scanf("%lld",&n);
        if(n%2==0)
        {
            n=n-1;
        }
        r=n/2;
        printf("%lld\n",r);
    }
}
