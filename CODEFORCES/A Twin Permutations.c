#include<stdio.h>
int main(void)
{
    int t,i,n,j;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%d",&n);
        int a[n],b[n];
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[i]);
        }
        if(n==2)
        {
            for(j=2; j>=1; j--)
            {
                printf("%d ",j);
            }
        }
        else
        {
            for(j=1; j<=n; j++)
            {
                printf("%d ",j);
            }
        }

        printf("\n");
    }
}
