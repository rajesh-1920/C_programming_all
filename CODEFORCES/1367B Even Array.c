#include<stdio.h>
int main(void)
{
    int t,i,n,r,odd,even;
    scanf("%d",&n);
    odd=0;
    even=0;
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    if(n==1)
    {
        r=-1;
    }
    else if(n%2==0)
    {
        if(even!=odd)
        {
            r=-1;
        }
    }
    else
    {
        if(even+1!=odd)
        {
            r=-1;
        }
    }
    printf("%d",r);
}
