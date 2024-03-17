#include<stdio.h>
void main()
{
    int a1[10][10],a2[10][10],c[10][10],i,j,k,a,b;
    printf("Enter the size of the square matrix :: ");
    scanf("%d",&a);
    b=a;
    printf("You have to enter the matrix elements in row-wise fashion ::\n\n");
    for(i=0; i<a; i++)
    {
        for(j=0; j<b; j++)
        {
            printf("Enter the next element in the 1st matrix = ");
            scanf("%d",&a1[i][j]);
        }
    }
    for(i=0; i<a; i++)
    {
        for(j=0; j<b; j++)
        {
            printf("Enter the next element in the 2nd matrix = ");
            scanf("%d",&a2[i][j]);
        }
    }
    printf("\nThe entered  matrix are:\n");
    for(i=0; i<a; i++)
    {
        printf("\n");
        for(j=0; j<b; j++)
            printf("%d ",a1[i][j]);
        printf("\n");
    }
    printf("\n");
    for(i=0; i<a; i++)
    {
        printf("\n");
        for(j=0; j<b; j++)
            printf("%d ",a2[i][j]);
        printf("\n");
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            c[i][j]=0;
            for(k=0; k<a; k++)
            {
                c[i][j]+=a1[i][k]*a2[k][j];
            }
        }
    }
    printf("\nProduct of the matrix is:\n");
    for(i=0; i<a; i++)
    {
        printf("\n");
        for(j=0; j<b; j++)
            printf("%d ",c[i][j]);
        printf("\n");
    }
}
