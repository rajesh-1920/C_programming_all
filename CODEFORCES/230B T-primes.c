#include<stdio.h>
int main(void)
{
    long long int n,i,j;
    scanf("%lld",&n);
    long long int x[n],t;
    for(i=0; i<n; i++)
    {
        scanf("%lld",&x[i]);
    }
    for(i=0; i<n; i++)
    {
        if(x[i]>1000)
        {
            x[i]=x[i]%10000;
        }
        t=0;
        for(j=2; j<=x[i]/2; j++)
        {
            if(x[i]%j==0)
            {
                t++;
            }
            if(t==2)
            {
                break;
            }
        }
        if(t==1)
        {
            printf("YES\n");
        }
        else
        {
           printf("NO\n");
        }
    }
}

