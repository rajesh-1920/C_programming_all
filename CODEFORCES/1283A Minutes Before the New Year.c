#include<stdio.h>
int main(void)
{
    int i,t,h,m,r;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d",&h,&m);
        h=23-h;
        m=60-m;
        r=h*60+m;
        printf("%d\n",r);
    }
}
