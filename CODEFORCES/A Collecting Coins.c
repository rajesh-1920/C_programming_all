#include<stdio.h>
int main(void)
{
    long long int t,i,j,k;
    scanf("%lld",&t);
    for(k=0; k<t; k++)
    {
        long long int a[3],n,r,l,temp;
        scanf("%lld%lld%lld%lld",&a[0],&a[1],&a[2],&n);
        for(i=0; i<3; i++)
        {
            for(j=0; j<2; j++)
            {
                if(a[j]>a[j+1])
                {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }
        l=(2*a[2])-a[0]-a[1];
        r=n-l;
        if(r%3==0&&r>=0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}
