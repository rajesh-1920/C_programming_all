#include<stdio.h>
int main()
{
    int n,p[100],q[100],i,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
        scanf("%d",&q[i]);
        if(p[i]<(q[i]-1))
        {
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
