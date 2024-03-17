#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        if(i==n && i%2!=0)
        {
            printf("I hate it");
            break;
        }
        else if(i==n && i%2==0)
        {
            printf("I love it");
            break;
        }
        else if(i%2!=0)
        {
            printf("I hate that ");
        }
        else if(i%2==0)
        {
            printf("I love that ");
        }
    }
    return 0;
}
