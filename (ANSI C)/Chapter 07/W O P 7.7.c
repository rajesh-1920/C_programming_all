#include<stdio.h>
int main(void)
{
    int row,col,n,i,j;
    printf("Enter the row number:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            printf("  ");
        }
        for(j=i;j>=0;j--)
        {
            printf(" %d",j);
        }
        for(j=1;j<=i;j++)
        {
            printf(" %d",j);
        }
        printf("\n");
    }

}
