#include<stdio.h>
int main(void)
{
    int m,n,i,r,j;
    scanf("%d%d",&m,&n);
    for(i=m,j=n;i>=0,j>=0;i--,j--)
    {
        if(i*j==0)
        {
            if(i==0)
            {
                r=n-j;
            }
            else
            {
               r=m-i;
            }
            break;
        }
    }
    if(r%2==0)
    {
        printf("Malvika\n");
    }
    else
    {
        printf("Akshat\n");
    }
}
