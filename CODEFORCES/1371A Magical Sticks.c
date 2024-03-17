#include<stdio.h>
int main(void)
{
    long long int i,t,n,r;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld",&n);
        if(n%2==0)
        {
            r=n/2;
        }
        else
        {
            r=((n-1)/2)+1;
        }
        printf("%d\n",r);
    }
}
