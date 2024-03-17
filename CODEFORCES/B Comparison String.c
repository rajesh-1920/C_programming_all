#include<stdio.h>
#include<string.h>
int main(void)
{
    int t,k,i,j,n,c,r;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%d",&n);
        char a[n+1];
        scanf("%s",a);
        c=1;
        r=1;
        for(j=0; j<n-1; j++)
        {
            if(a[j]==a[j+1])
            {
                c++;
            }
            if(r<c)
            {
                r=c;
            }
            if(a[j]!=a[j+1])
            {
                if(r<c)
                {
                    r=c;
                }
                c=1;
            }
        }
        printf("%d\n",r+1);
    }
}
