#include<stdio.h>
int main(void)
{
    int a,t,i,r;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%d",&a);
        r=180-a;
        if(360%r==0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}
