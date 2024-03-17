#include<stdio.h>
int main(void)
{
    long long int n,i,j,temp,r,l,t;
    double f;
    scanf("%lld%lld",&n,&l);
    long long int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%lld",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n-1; j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    r=0;
    for(i=0; i<n-1; i++)
    {
        t=a[i+1]-a[i];
        if(r<t)
        {
            r=t;
        }
    }
    if(r/2<a[0]-0&&a[0]-0>l-a[n-1])
    {
        f=(double)a[0]-0.0;
    }
    else if(r/2<l-a[0]&&a[0]-0<l-a[n-1])
    {
        f=(double)l-(double)a[n-1];
    }
    else
    {
        f=(double)(r/2.0);
    }
    printf("%.10lf\n",f);
}
