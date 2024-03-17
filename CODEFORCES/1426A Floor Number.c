#include<stdio.h>
int main(void)
{
    int i,t,n,r,x,h;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d",&n,&x);
        if(n<=2)
        {
            r=1;
        }
        else
        {
            n=n-2;
            h=n/x;
            n=n-(h*x);
            r=h+1;
            if(n>0)
            {
                r=r+1;
            }
        }
        printf("%d\n",r);
    }
}
