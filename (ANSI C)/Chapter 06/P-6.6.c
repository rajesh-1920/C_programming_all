/*P-6.6*/
/*print two dimensional square root table*/

#include<stdio.h>
int main() /*start of main function*/
{
    float i,j,n,sq; /*variable*/

    for(i=0;i<=9;i++) /*loop for row*/
    {
        n=i;
        printf("%3.1f   ",n); /*1st column*/

        for(j=0;j<=9;j++) /*loop for column*/
        {
            n=n+0.1;
            sq=sqrt(n); /*calculate square root table*/
            printf("%3.2f  ",sq); /*showing result*/
        } /*end column loop*/

    printf("\n");
    } /*end row loop*/

    return 0;
} /*end of main function*/
