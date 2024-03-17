#include<stdio.h>
int main(void)
{
    long int n,i,c=0;
    scanf("%ld",&n);
    long int a[n],min=1000000;
    for(i=0;i<n;i++)
    {
        scanf("%ld",&a[i]);
        if(min>a[i])
        {
            min=a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(min==a[i])
        {
            c++;
        }
    }
    if(c%2==0)
    {
        printf("Unlucky\n");
    }
    else
    {
        printf("Lucky\n");
    }
}
