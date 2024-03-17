#include<stdio.h>
main()
{
    long long int c1,c2,n,t,k,i,h;
    scanf("%lld",&t);
    for(k=0;k<t;k++)
    {
        scanf("%lld",&n);
        c1=n/3;
        h=n-c1;
        if(h%2==0)
        {
            c2=h/2;
        }
        else
        {
            c1=c1+1;
            h=h-1;
            c2=h/2;
        }
        printf("%lld %lld\n",c1,c2);
    }
}
