/*p-10*/
/*product of two integer*/

#include<stdio.h>
int main() /*main function start*/
{
    int x=0, y=0, P=0; /*variable*/

    printf("Input the first integer: "); /*prompt*/
    scanf("%d",&x); /*take first integer*/

    printf("Input the second integer: "); /*prompt*/
    scanf("%d",&y); /*take second integer*/

    P=x*y; /*product calculation*/

    printf("Product of the above integers = %d\n",P);/*Display sum*/

    return 0;
}/*End of main function*/
