#include<stdio.h>
int main(void)
{
    int n,m,h,r;
    scanf("%d%d",&n,&m);
    r=n;
    while(1)
    {
        h=n/m;
        r=r+h;
        n=n-(h*m);
        n=h+n;
        if(n<m)
        {
            break;
        }
    }
    if(r%m==0)
    {
        r=r+1;
    }
    printf("%d\n",r);
}
