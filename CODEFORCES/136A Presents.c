#include<stdio.h>
int main(void)
{
    int n,i,j;
    scanf("%d",&n);
    int p[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&p[i]);
    }
    for(i=1; i<=n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(p[j]==i)
            {
                printf("%d ",j+1);
            }
        }
    }
}
