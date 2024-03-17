#include <stdio.h>
int main(void)
{
    long long int i,j,n,m;
    scanf("%lld%lld",&n,&m);
    long long int a[m],r;
    for(j=0; j<m; j++)
    {
        scanf("%lld",&a[j]);
    }
    r=a[0]-1;
    for(j=1; j<m; j++)
    {
        if(a[j]>a[j-1])
        {
            r=r+a[j]-a[j-1];
            continue;
        }
        if(a[j]<a[j-1])
        {
            r=r+n-a[j-1]+a[j];
        }
    }
    printf("%lld\n",r);
}
