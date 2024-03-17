#include<stdio.h>
int main(void)
{
    long long int n,a[190000],c=0,i,temp=0;
    scanf("%lld",&n);
    for(i=0; i<n; i++)
    {
        scanf("%lld",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        if(a[i]<=a[i+1])
        {
            c++;
        }
        else
        {
            if(temp<c)
            {
                temp=c;
            }
            c=0;
        }
    }
    printf("%lld\n",temp+1);
}
