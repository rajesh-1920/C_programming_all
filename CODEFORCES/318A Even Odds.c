#include<stdio.h>
int main()
{
    unsigned long long int n,k,m,v;
    scanf("%llu%llu",&n,&k);

    if(n%2==0)
    {
        m=n/2;
    }
    else
    {
        m=1+(n/2);
    }

    if(k<=m)
    {
        v=(k*2)-1;
    }
    else
    {
        v=(k-m)*2;
    }
    printf("%llu\n",v);
    return 0;
}
