#include<stdio.h>
int main()
{
    unsigned long long int t,n,i,c,x;
    scanf("%llu",&t);
    for(i=1; i<=t; i++)
    {
        c=0;
        scanf("%llu",&n);
        if(n%2!=0 && n>1)
        {
            printf("YES\n");
        }
        else
        {
            for(x=2; x<=n; x=x*2)
            {
                if(n==x || n<=1)
                {
                    printf("NO\n");
                    c++;
                    break;
                }
            }
            if(c==0 && n>1)
            {
                printf("YES\n");
            }
        }
    }
    return 0;
}
