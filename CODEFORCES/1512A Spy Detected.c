#include<stdio.h>
int main(void)
{
    int t,k,n;
    scanf("%d",&t);
    for(k=0; k<t; k++)
    {
        scanf("%d",&n);
        int a[n],i,r;
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0; i<n-1; i++)
        {
            if(a[0]!=a[1]&&a[1]==a[2])
            {
                r=1;
            }
            else if(a[i]!=a[i+1])
            {
                r=i+2;
                break;
            }
        }
        printf("%d\n",r);
    }
}
