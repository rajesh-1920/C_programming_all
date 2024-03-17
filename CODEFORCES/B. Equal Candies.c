#include<stdio.h>
int main(void)
{
    long long int i,t,n,j;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld",&n);
        long long int a[n],min=100000000000,r=0;
        for(j=0;j<n;j++)
        {
            scanf("%lld",&a[j]);
            if(min>a[j])
            {
                min=a[j];
            }
        }
        for(j=0;j<n;j++)
        {
           r=r+(a[j]-min);
        }
        printf("%lld\n",r);
    }
}
