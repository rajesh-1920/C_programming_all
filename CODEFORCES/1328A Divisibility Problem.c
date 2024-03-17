#include<stdio.h>
int main()
{
    long long int t,i,a,b,c;
    scanf("%lld",&t);

    for(i=1;i<=t;i++)
    {
        scanf("%lld%lld",&a,&b);
        if(a%b==0)
        {
            c=0;
        }
        else
        {
        c=b-(a%b);
        }
        printf("%lld\n",c);
    }
    return 0;
}
