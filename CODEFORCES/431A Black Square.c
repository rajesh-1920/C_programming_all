#include<stdio.h>
#include<string.h>
int main(void)
{
    long long int i,a1,a2,a3,a4,l,sum=0;
    char n[1000000];
    scanf("%lld%lld%lld%lld",&a1,&a2,&a3,&a4);
    scanf("%s",n);
    l=strlen(n);
    for(i=0; i<l; i++)
    {
        if(n[i]=='1')
        {
            sum=sum+a1;
            continue;
        }
        if(n[i]=='2')
        {
            sum=sum+a2;
            continue;
        }
        if(n[i]=='3')
        {
            sum=sum+a3;
            continue;
        }
        if(n[i]=='4')
        {
            sum=sum+a4;
            continue;
        }
    }
        printf("%lld\n",sum);
}
