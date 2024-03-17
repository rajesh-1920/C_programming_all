#include<stdio.h>
int main()
{
    long long int n,d,count=0;
    scanf("%lld",&n);
    while(n>1)
    {
        d=n%10;
        if(d==4 || d==7)
        {
            count++;
        }
    n=n/10;
    }

    if(count==4 || count==7)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
