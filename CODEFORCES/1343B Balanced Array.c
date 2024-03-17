#include<stdio.h>
int main(void)
{
    long long int t,i,n,j,k,so,se;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld",&n);
        if(n%4!=0)
        {
            printf("NO\n");
            continue;
        }
        else
        {
            printf("YES\n");
            k=2;
            so=se=0;
            for(j=0;j<n/2;j++)
            {
                printf("%lld ",k);
                se=se+k;
                k=k+2;
            }
            k=1;
            for(j=0;j<n/2-1;j++)
            {
                printf("%lld ",k);
                so=so+k;
                k=k+2;
            }
            printf("%lld\n",(se-so));
        }
    }
}
