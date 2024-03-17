#include<stdio.h>
int main(void)
{
    int i,j,c;
    for(i=1; i<=5; i++)
    {
        c=1;
        for(j=i; j<=5; j++)
        {
            printf("%d ",c);
            c++;
        }
        printf("\n");
    }
}
