#include<stdio.h>
int main(void)
{
    int t,n,k,i,j,c;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%d",&n);
        int a[n],temp;
        c=0;
        for(k=0; k<n; k++)
        {
            scanf("%d",&a[k]);
        }
        for(k=0; k<n; k++)
        {
            for(j=0; j<n-1; j++)
            {
                if(a[j]>a[j+1])
                {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }
        for(k=0; k<n-1; k++)
        {
            if(a[k+1]-a[k]<=1)
            {
                c++;
            }
        }
        if(c+1==n)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}
