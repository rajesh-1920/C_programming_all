#include<stdio.h>
int main(void)
{
    long int i,n,r,t,h,j,c;
    scanf("%ld",&t);
    for(i=0; i<t; i++)
    {
        r=1;
       scanf("%ld",&n);
       h=n%10;
       c=n;
       for(j=0;j<h;j++)
       {
           n=n-2021;
       }
       if(n%2020==0)
       {
           r=0;
       }
       if(r==0&&c>=2020)
       {
           printf("YES\n");
       }
       else
       {
           printf("NO\n");
       }
    }
}
