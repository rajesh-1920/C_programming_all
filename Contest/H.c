#include<stdio.h>
int main()
{
    long long int i,j,n,a[1000],p,q,x,k=0,r[100000],rmin;
    scanf("%lld",&n);
    for(i=0; i<n; i++)
    {
        scanf("%lld",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                a[i]=a[i]+a[j];
                a[j]=a[i]-a[j];
                a[i]=a[i]-a[j];
            }
        }
    }
    p=a[0]+a[1];
    q=a[n-1]+a[n-2];
    printf("%lld  %lld\n",p,q);
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            x=a[i]+a[j];
            r[k]=(2*x-(p+q));
        }
    }
    rmin=r[0];
    for(i=0; i<n; i++)
    {
        if(r[i]<rmin)
        {
            rmin=r[i];
        }
    }
    printf("%lld\n",rmin);
    return 0;
}
