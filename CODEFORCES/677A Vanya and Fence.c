#include<stdio.h>
int main()
{
    int n,h,i,a[1010],c=0;
    scanf("%d%d",&n,&h);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>h)
        {
            c=c+2;
        }
        else
        {
            c++;
        }
    }
    printf("%d\n",c);
    return 0;
}
