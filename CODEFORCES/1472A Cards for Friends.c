#include<stdio.h>
int main(void)
{
    long long int i,k,t,w,h,n,r,cw,ch;
    scanf("%lld",&t);
    for(k=0;k<t;k++)
    {
        r=0;
        cw=ch=1;
        scanf("%lld%lld%lld",&w,&h,&n);
        while(1)
        {
            if(w%2!=0)
            {
                break;
            }
            w=w/2;
            cw=cw*2;
        }
        while(1)
        {
            if(h%2!=0)
            {
                break;
            }
            h=h/2;
            ch=ch*2;
            if(ch*cw>=n)
            {
                r=1;
                break;
            }
        }
        if(ch*cw>=n)
            {
                r=1;
            }
        if(n==1||(n==2&&(w%2==0||h%2==0)))
        {
            r=1;
        }
        if(r==1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}
