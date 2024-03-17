#include<stdio.h>
int main(void)
{
    long long int t,n,i,j,max,min,r;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld",&n);
        long long int a[n];
        for(j=0;j<n;j++)
        {
            scanf("%lld",&a[j]);
        }
        max=min=a[0];
        for(j=0;j<n;j++)
        {
            if(a[j]>max)
            {
                max=a[j];
            }
            if(a[j]<min)
            {
                min=a[j];
            }
        }
        r=max-min;
        printf("%lld\n",r);
    }
}
