#include<stdio.h>
int main(void)
{
    int n,k,i,h,c=0,sum=0;
    scanf("%d%d",&n,&k);
    h=240-k;
    for(i=1;i<=n;i++)
    {
        sum=sum+i*5;
        if(sum>h)
        {
            break;
        }
        c++;
    }
    printf("%d\n",c);
}
