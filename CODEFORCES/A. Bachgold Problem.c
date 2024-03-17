#include<stdio.h>
int main(void)
{
    long int n,k,c=0,i;
    scanf("%ld",&n);
    if(n%2==0)
    {
        c=c+n/2;
        printf("%ld\n",c);
        for(i=n;i>0;i=i-2)
        {
            printf("2 ");
        }
    }
    else
    {
        c=c+1;
        n=n-3;
        c=c+n/2;
        printf("%ld\n",c);
        printf("3 ");
        for(i=n;i>0;i=i-2)
        {
            printf("2 ");
        }
    }
}
