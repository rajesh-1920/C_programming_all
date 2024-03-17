#include<stdio.h>
int main()
{
    long long int i,t,x,y,n,k,r;
    scanf("%llld",&t);
    for(i=0; i<t; i++)
    {
        scanf("%lld%lld%lld",&x,&y,&n);
        r=n%x;
        if(r==y)
        {
            k=n;
        }
        else if(r>y)
        {
            k=n-(r-y);
        }
        else
        {
            k=n-x-(r-y);
        }
    printf("%lld\n",k);
    }
    return 0;
}
