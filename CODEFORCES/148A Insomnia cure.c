#include<stdio.h>
int main(void)
{
    long int k,l,m,n,d,i,c=0;
    scanf("%ld%ld%ld%ld%ld",&k,&l,&m,&n,&d);
    for(i=1; i<=d; i++)
    {
        if(i%k==0)
        {
            c++;
        }
        if(i%k!=0&&i%l==0)
        {
            c++;
        }
        if(i%k!=0&&i%l!=0&&i%m==0)
        {
            c++;
        }
        if(i%k!=0&&i%l!=0&&i%m!=0&&i%n==0)
        {
            c++;
        }
    }
    printf("%ld\n",c);
}
