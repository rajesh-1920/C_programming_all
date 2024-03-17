#include<stdio.h>
int main(void)
{
    long long int n,q,i,j,c;
    scanf("%lld",&n);
    long long int x[n];
    for(i=0; i<n; i++)
    {
        scanf("%lld",&x[i]);
    }
    scanf("%lld",&q);
    long long int m[q];
    for(i=0; i<q; i++)
    {
        scanf("%lld",&m[i]);
        c=0;
        for(j=0; j<n; j++)
        {
            if(m[i]>=x[j])
            {
                c++;
            }
        }
        printf("%lld\n",c);
    }
}
