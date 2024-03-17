/*p-69*/
/*print binomial coefficient table from(0-10)*/

#include<stdio.h>
#define MAX 10
int main() /*main function start*/
{
    int i,j,n,c=1; /*variable*/

    printf("Mx ");

    for(i=0; i<=MAX; i++)
    {
        printf("%2d",i);
    }
    printf("\n------------------------------------\n");
    for(i=0; i<=MAX; i++) /*loop for row*/
    {
        printf("%2d %2d ",i,c);
n=i;
        for(j=0; j<i; j++) /*loop for column*/
        {
            n=n+j;
            printf("%2d ",n);

        } /*end column loop*/

        printf("%2d \n",c);
    } /*end row loop*/

    printf("\n------------------------------------\n");
    return 0;
}/*End of main function*/

