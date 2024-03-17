#include<stdio.h>
int main(void)
{
    int n,k,i,j,c=0;
    scanf("%d%d",&n,&k);
    int y[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&y[i]);
    }
    for(i=0;i<n;i++)
    {
        if(5-y[i]>=k)
        {
            c++;
        }
    }
    printf("%d\n",c/3);
}
