#include<stdio.h>
int main(void)
{
    int i,j,k;
    for(i=1; i<=5; i++)
    {
        k=i;
        for(j=1; j<=5; j++)
        {
            if(i+j<=5)
            {
                printf("  ");
            }
            else
            {
                printf("%d ",k);
                k++;
            }
        }
        k--;
        for(j=1; j<i; j++)
        {
            k--;
            printf("%d ",k);
        }
        printf("\n");
    }
}
