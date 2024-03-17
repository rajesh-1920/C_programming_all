#include<stdio.h>

int main()
{
    int n,a[100],max=0,total=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(max<a[i])
        {
            max=a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        total=total+(max-a[i]);
    }
    printf("%d\n",total);
    return 0;
}
