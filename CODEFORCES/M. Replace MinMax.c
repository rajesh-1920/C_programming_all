#include<stdio.h>
int main(void)
{
    long long int n,i,max,min,pmax,pmin;
    scanf("%lld",&n);
    long long int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%lld",&a[i]);
    }
    max=a[0];
    min=a[0];
    pmax=0;
    pmin=0;
    for(i=0; i<n; i++)
    {
        if(max<a[i])
        {
            max=a[i];
            pmax=i;
        }
        if(min>a[i])
        {
            min=a[i];
            pmin=i;
        }
    }
    a[pmax]=min;
    a[pmin]=max;
    for(i=0;i<n;i++)
    {
        printf("%lld ",a[i]);
    }
}
