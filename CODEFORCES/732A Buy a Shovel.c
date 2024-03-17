#include<stdio.h>
int main(void)
{
    int k,i,r,h,t;
    scanf("%d%d",&k,&r);
    for(i=1;i;i++)
    {
        t=k*i;
        h=t-r;
        if(h%10==0||t%10==0)
        {
            break;
        }
    }
    printf("%d\n",i);
}
