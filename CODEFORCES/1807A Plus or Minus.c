#include<stdio.h>
int main(void)
{
    int i,t,a,b,c;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(a+b==c)
        {
            printf("+\n");
        }
        else
        {
            printf("-\n");
        }
    }
}
