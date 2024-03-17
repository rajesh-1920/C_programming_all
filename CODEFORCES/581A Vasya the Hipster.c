#include<stdio.h>
int main(void)
{
    int a,b,sm,dif,h;
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        dif=b;
        h=a-b;
        sm=h/2;
    }
    else if(a<b)
    {
        dif=a;
        h=b-a;
        sm=h/2;
    }
    else
    {
        dif=a;
        sm=0;
    }
    printf("%d %d\n",dif,sm);
}
