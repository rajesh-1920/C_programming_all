/*p-59*/
/*display sum of a series*/

#include<stdio.h>
int main() /*main function start*/
{
    float n=0,sum=0,i; /*variable*/

    printf("Enter the last divider value: "); /*prompt*/
    scanf("%f",&n); /*taking value*/

    for(i=1;i<=n;i++)
    {
        sum=sum+(1/i); /*calculate sum*/
    }
    printf("Sum = %.3f\n",sum); /*display sum*/

    return 0;
}/*End of main function*/

