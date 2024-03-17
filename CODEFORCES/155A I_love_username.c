#include<stdio.h>
int main(void)
{
    int n,i,c=0,j;
    scanf("%d",&n);
    int a[n],max,min;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        max=0;
        min=0;
        for(j=i;j>=1;j--)
        {
            if(a[i]>a[j-1])
            {
                max++;
            }
            if(a[i]<a[j-1])
            {
                min++;
            }
        }
        if(max==i)
        {
            c++;
        }
        if(min==i)
        {
            c++;
        }
    }
    printf("%d\n",c);
}
