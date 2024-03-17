#include<stdio.h>
int main(void)
{
    int i,j;
    for(i=65; i<5+65; i++)
    {
        for(j=65; j<=i; j++)
        {
            printf("%c ",i);
        }
        printf("\n");
    }
}
