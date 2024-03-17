#include <stdio.h>
int main(void)
{
    int i,j,k,t,b[2000],l;
    scanf("%d",&t);
    for(j=1; j<=t; j++)
    {
        scanf("%d",&k);
        l=0;
        for(i=1; i<=2000; i++)
        {
            if(i%10==3||i%3==0)
            {
                continue;
            }
            b[l]=i;
            l++;
        }
        printf("%d\n",b[k-1]);
    }
}
