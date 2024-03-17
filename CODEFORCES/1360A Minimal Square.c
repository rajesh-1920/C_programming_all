#include<stdio.h>
int main(void)
{
    long int a,b,t,i,max,min,r;
    scanf("%ld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%ld%ld",&a,&b);
        max=a;
        min=b;
        if(b>a)
        {
           max=b;
        min=a;
        }
        if(min*2>=max)
        {
            r=min*2;
        }
        else
        {
            r=max;
        }
        printf("%ld\n",r*r);
    }
}
