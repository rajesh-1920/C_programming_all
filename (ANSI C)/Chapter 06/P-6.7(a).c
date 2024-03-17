/*P-6.7(a)*/
/*display Floyd's triangle*/

#include<stdio.h>
int main() /*start of main function*/
{
    int i,j,n=1; /*variable*/

    for(i=1;1;i++) /*loop for row*/
    {
        for(j=1;j<=i;j++) /*loop for column*/
        {
            printf("%3d",n);
            n++;
        }
        printf("\n");
    if(n>91)
    {
        break;
    }
    }

    return 0;
} /*end of main function*/
