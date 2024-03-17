#include<stdio.h>
int main()
{
    int y,n,d[10],i;
    scanf("%d",&y);
    while(1)
    {
        y++;
        n=y;
        i=0;
        while(n>0)
        {
            d[i]=n%10;
            n=n/10;
            i++;
        }
        if( d[0]!=d[1] && d[0]!=d[2] && d[0]!=d[3] && d[1]!=d[2] && d[1]!=d[3] && d[2]!=d[3] )
        {
            break;
        }
    }
    printf("%d\n",y);
    return 0;
}
