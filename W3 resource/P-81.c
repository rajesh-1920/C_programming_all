/*p-81*/
/*display a square border using # character*/

#include<stdio.h>

int main()/*start of main function*/
{
    int i,j,n; /*variable*/

    printf("Enter the size of the square: "); /*prompt*/
    scanf("%d",&n); /*taking size*/

    for(i=1; i<=n; i++) /*creating the square*/
    {
        for(j=1; j<=n; j++)
        {
            if(i==n||i==1||j==1||j==n)
            {
                printf("# ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}/*End of main function*/
