#include<stdio.h>
int main(void)
{
    long long int x,y,k;
    scanf("%lld%lld",&x,&y);
    k=x*y;
    printf("%lld + %lld = %lld\n",x,y,x+y);
    printf("%lld * %lld = %lld\n",x,y,k);
    printf("%lld - %lld = %lld\n",x,y,x-y);
}
