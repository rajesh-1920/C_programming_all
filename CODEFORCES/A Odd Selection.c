#include<stdio.h>
int main(void)
{
    int t,n,x;
    scanf("%d",&t);
    for(int k=1; k<=t; k++)
    {
        scanf("%d%d",&n,&x);
        int a[n],co=0,ce=0;
        for(int j=0; j<n; j++)
        {
            scanf("%d",&a[j]);
            if(a[j]%2!=0)
            {
                co++;
            }
            else
            {
                ce++;
            }
        }
        int m=x;
        if(co==0)
        {
            printf("NO\n");
        }
        else
        {
            co--;
            x--;
            for(int i=0; i<=m; i++)
            {
                if(co>=2&&x>=2)
                {
                    x=x-2;
                    co=co-2;
                }
                else if(ce>=1&&x>=1)
                {
                    ce--;
                    x--;
                }
            }
            if(x==0)
            {
                printf("Yes\n");
            }
            else
            {
                printf("NO\n");
            }
        }
    }
}
