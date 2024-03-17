#include<stdio.h>
int main(void)
{
    long int i,t,a,b,c,d,r;
    scanf("%ld",&t);
    for(i=0; i<t; i++)
    {
        r=0;
        scanf("%ld%ld%ld%ld",&a,&b,&c,&d);
        if(a<b)
        {
            r++;
        }
        if(a<c)
        {
            r++;
        }
        if(a<d)
        {
            r++;
        }
        printf("%d\n",r);
    }
}
