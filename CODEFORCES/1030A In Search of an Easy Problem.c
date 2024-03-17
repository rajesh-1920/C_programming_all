#include<stdio.h>
int main()
{
    int n,a[100],i,c=0,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        c++;
    }

    for(i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            printf("HARD\n");
            break;
        }
    count++;
    }
    if(c==n && count==n)
    {
        printf("EASY\n");
    }
    return 0;
}
