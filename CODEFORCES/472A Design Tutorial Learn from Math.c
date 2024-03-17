#include<stdio.h>
int main(void)
{
    long int n,i,x,y,h,t;
    scanf("%ld",&n);
    if(n%2==0)
    {
        h=n/2;
        if(h%2==0)
        {
            x=y=n/2;
        }
        else
        {
            n=n+2;
            x=n/2;
            y=x-2;
        }
    }
    else
    {
        for(x=4; x<=n; x=x+2)
        {
            y=n-x;
            t=0;
            for(i=2; i<=y/2; i++)
            {
                if(y%i==0)
                {
                    t++;
                    break;
                }
            }
            if(t!=0)
            {
                break;
            }
        }
    }
    printf("%ld %ld\n",x,y);
}
