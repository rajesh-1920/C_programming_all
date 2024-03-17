#include<stdio.h>
int main(void)
{
    long long int n,i,j=5;
    scanf("%lld",&n);
    for(i=1;i<n;i++)
    {
        j=j*5;
    }
    i=j%100;
    printf("%lld\n",i);
}
