/*threat a square*/
#include<stdio.h>

int main()
{
    unsigned long long int a=0,n=0,m=0,t=0,x=0,y=0;
    scanf("%llu%llu%llu",&n,&m,&a);

    x=m/a; /*needed tiles in one line*/
    y=n/a;

    if(m%a!=0)/*increase 1 for last floating part*/
    {
       x=x+1;
    }
    if(n%a!=0)
    {
       y=y+1;
    }

    t=x*y;
    printf("%llu\n",t);

    return 0;
}
