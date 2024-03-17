#include<stdio.h>
int main(void)
{
    int t,i,n,k,j,r,d;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%d",&n);
        int s[n];
        for(k=0; k<n; k++)
        {
            scanf("%d",&s[k]);
        }
        r=s[0]-s[1];
        if(r<0)
        {
            r=r*(-1);
        }
        for(k=0; k<n; k++)
        {
            for(j=0; j<n; j++)
            {
                if(k==j)
                {
                    continue;
                }
                d=s[k]-s[j];
                if(d<0)
                {
                    d=d*(-1);
                }
                if(r>d)
                {
                    r=d;
                }
            }
        }
        printf("%d\n",r);
    }
}
