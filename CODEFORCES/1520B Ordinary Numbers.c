#include<stdio.h>
int main(void)
{
    long long int t,k,n,i,j,c;
    scanf("%lld",&t);
    for(k=0; k<t; k++)
    {
        c=0;
        scanf("%lld",&n);
        for(i=1;i<=9;i++)
        {
           j=i;
            while(j<=n)
            {
                c++;
                j=i+j*10;
                if(j>n)
                {
                    break;
                }
            }
        }
        printf("%lld\n",c);
    }
}
