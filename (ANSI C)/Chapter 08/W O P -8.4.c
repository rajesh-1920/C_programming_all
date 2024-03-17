#include<stdio.h>
#define ROWS 5
#define COLUMNS 5
int main(void)
{
    int i,j;
    printf("MULTIPLECATION TABLE\n\n   ");
    for(i=1;i<=COLUMNS;i++)
        printf("%4d",i);
    printf("\n--------------------------\n");
    for(i=1;i<=ROWS;i++)
    {
        printf("%2d|",i);
        for(j=1;j<=COLUMNS;j++)
            printf("%4d",i*j);
        printf("\n");
    }
}

