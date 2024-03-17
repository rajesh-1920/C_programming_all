#include<stdio.h>
int main(void)
{
    long int i,n,h,c=0;
    scanf("%ld",&n);
    for(i=1;i<=n/2;i++)
    {
        h=n-i;
        if(h%i==0)
        {
            c++;
        }
    }
    printf("%ld\n",c);
}
