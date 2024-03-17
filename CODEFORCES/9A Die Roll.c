#include<stdio.h>
int main(void)
{
    int y,w,r1,r2,max,min,d;
    scanf("%d%d",&y,&w);
    max=y;
    if(y<w)
    {
        max=w;
    }
    d=7-max;
    r1=d;
    r2=6;
    if(d%2==0)
    {
        r1=d/2;
        r2=3;
    }
    if(6%d==0)
    {
        r2=6/d;
        r1=1;
    }
    printf("%d/%d\n",r1,r2);
}
