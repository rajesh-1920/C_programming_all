#include <stdio.h>
int main(void)
{
    int i,j,k,t,n,s,c;
    scanf("%d",&t);
    for(j=0; j<t; j++)
    {
        scanf("%d",&n);
        s=n;
        c=0;
        for(i=100000; i>=1; i=i/10)
        {
            k=n/i;
            n=n-k*i;
            if(k>=1)
            {
                c++;
            }
        }
        printf("%d\n",c);
        n=s;
        for(i=100000; i>=1; i=i/10)
        {
            k=n/i;
            n=n-k*i;
            if(k>=1)
            {
                printf("%d ",k*i);
            }
        }
        printf("\n");
    }
}

