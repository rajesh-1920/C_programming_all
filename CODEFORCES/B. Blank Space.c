#include<stdio.h>
int main(void)
{
    int t,i,j,c,n,k,count;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        c=0;
        count=0;
        scanf("%d",&n);
        int a[n];
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[j]);
        }
        for(k=0; k<n; k++)
        {
            if(a[k]==1)
            {
                continue;
            }
            count++;
            if(c<count)
            {
                c=count;
            }
            if(a[k+1]==1)
            {
                count=0;
            }
        }
        printf("%d\n",c);
    }
}
