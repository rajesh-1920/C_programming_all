#include<stdio.h>
int main(void)
{
    long int i,t,n,r,j,k,l;
    scanf("%ld",&t);
    for(i=0; i<t; i++)
    {
        scanf("%ld",&n);
        if(n%2==0)
        {
            r=n/2;
        }
        else
        {
            r=(n-1)/2;
        }
        printf("%ld\n",r);
    }
}
