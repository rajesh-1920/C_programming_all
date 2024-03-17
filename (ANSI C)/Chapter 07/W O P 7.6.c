#include<stdio.h>
#define FIRST 360
#define SECOND 240
int main(void)
{
    int n,m,i,j,roll_number,marks,total;
    printf("Enter the number of students and subjects \n");
    scanf("%d%d",&n,&m);
    printf("\n");

    for(i=1; i<=n; i++)
    {
        printf("Enter roll_number : ");
        scanf("%d",&roll_number);
        total=0;
        printf("Enter marks of %d subjects for roll_number %d\n",m,roll_number);

        for(j=0; j<m; j++)
        {
            scanf("%d",&marks);
            total+=marks;
        }

        printf("Total marks = %d",total);
        if(total>=FIRST)
            printf(" (First Division) \n\n");
        else if(total>=SECOND)
            printf(" (Second Division) \n\n");
        else
            printf(" ***FAIL*** \n\n");
    }
    printf("\n");
}
