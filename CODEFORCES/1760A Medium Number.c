#include<stdio.h>
int main(void)
{
    int i,t,a,b,c,mid;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if((a<b&&b<c)||(c<b&&b<a))
        {
            mid=b;
        }
        if((a<c&&c<b)||(b<c&&c<a))
        {
            mid=c;
        }
        if((b<a&&a<c)||(c<a&&a<b))
        {
            mid=a;
        }
        printf("%d\n",mid);
    }
}
