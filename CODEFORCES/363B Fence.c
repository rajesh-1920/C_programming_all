#include<stdio.h>
int main(void)
{
    long int n,k,i,sum=0,r,p,p1;
    scanf("%ld%ld",&n,&k);
    long int h[n];
    for(i=0; i<n; i++)
    {
        scanf("%ld",&h[i]);
    }
    for(i=0; i<k; i++)
    {
        sum=sum+h[i];
    }
    r=sum;
    p1=p=1;
    for(i=k; i<n; i++)
    {
        sum=sum+h[i]-h[i-k];
        p1++;
        if(r>sum)
        {
            r=sum;
            p=p1;
        }
    }
    printf("%ld\n",p);
}
