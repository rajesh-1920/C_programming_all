#include<stdio.h>
int main(void)
{
    long int n,i,count=0,r,h=0;
    scanf("%ld",&n);
    long int a[n];
    for(i=0; i<n; i++)
    {
       scanf("%ld",&a[i]);
    }
    for(i=0; i<n; i++)
    {
       if(a[i]>0)
       {
           h=h+a[i];
       }
       if(a[i]<0&&h>0)
       {
           h--;
       }
       else if(a[i]<0&&h<=0)
       {
           count++;
       }
    }
    printf("%ld\n",count);
}
