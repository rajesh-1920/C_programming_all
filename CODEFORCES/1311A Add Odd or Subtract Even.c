#include<stdio.h>
int main(void)
{
    long long int t,k,i,a,b,d,r;
    scanf("%lld",&t);
    for(k=0; k<t; k++)
    {
        scanf("%lld%lld",&a,&b);
        d=b-a;
        if(d==0)
        {
            r=0;
        }
        else if(d>0)
        {
            if(d%2!=0)
            {
                r=1;
            }
            else
            {
                r=2;
            }
        }
        else
        {
            if(d%2!=0)
            {
                r=2;
            }
            else
            {
                r=1;
            }
        }
        printf("%lld\n",r);
    }
}
