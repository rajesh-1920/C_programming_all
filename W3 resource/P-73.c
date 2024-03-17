/*p-73*/
/*checking if first number is multiple of second number*/

#include<stdio.h>

int main() /*main function start*/
{
    int n1,n2; /*variable*/

    printf("Enter first number: "); /*prompt*/
    scanf("%d",&n1); /*taking first number*/

    printf("Enter second number: "); /*prompt*/
    scanf("%d",&n2); /*taking second number*/

    if(n1%n2==0) /*checking it's multiple or not*/
    {
        printf("\n%d is a multiple of %d\n",n1,n2); /*showing result*/
    }
    else
    {
        printf("\n%d is not a multiple of %d\n",n1,n2); /*showing result*/
    }

    return 0;
}/*End of main function*/
