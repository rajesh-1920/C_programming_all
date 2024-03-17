#include<stdio.h>
int main()
{
    int k,n,w,i,sum=0,need;
    scanf("%d%d%d",&k,&n,&w);
    for(i=1;i<=w;i++)
    {
        sum=sum+(i*k);
    }
    need=sum-n;
    if(need<=0)
    {
        need=0;
    }
    printf("%d\n",need);
    return 0;
}
