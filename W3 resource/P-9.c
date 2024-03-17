/*p-9*/
/*sum of two integer*/

#include<stdio.h>
int main() /*main function start*/
{
    int x=0, y=0, sum=0; /*variable*/

    printf("Input the first integer:"); /*prompt*/
    scanf("%d",&x); /*take first integer*/

    printf("Input the second integer:"); /*prompt*/
    scanf("%d",&y); /*take second integer*/

    sum=x+y; /*sum calculation*/

    printf("Sum of the above integers = %d\n",sum);/*Display sum*/

    return 0;
}/*End of main function*/
