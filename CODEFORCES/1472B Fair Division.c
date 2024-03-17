#include<stdio.h>
int main()
{
    long long int c1,c2,n,t,k,i,r;
    scanf("%lld",&t);
    for(k=0; k<t; k++)
    {
        c1=c2=r=0;
        scanf("%lld",&n);
        long long int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
            if(a[i]==1)
            {
                c1++;
            }
            if(a[i]==2)
            {
                c2++;
            }
        }
        if(c1%2!=0)
        {
            r=0;
        }
        else if(c2%2==0)
        {
            r=1;
        }
         else if(c2%2!=0&&c1>1)
        {
            r=1;
        }
        if(r==1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}
