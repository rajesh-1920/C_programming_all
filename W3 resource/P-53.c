/*p-53*/
/*calculate simple interest*/

#include<stdio.h>
int main() /*main function start*/
{
    int p=0,r=0,t=0,i=0; /*variable*/

    printf("Input the principle: "); /*prompt*/
    scanf("%d",&p); /*taking principle*/
    printf("Input the rate of interest in 100: "); /*prompt*/
    scanf("%d",&r); /*taking rate of interest*/
    printf("Input the time in year: "); /*prompt*/
    scanf("%d",&t); /*taking time*/

    i=p*r*t/100; /*calculate interest*/

    printf("Simple interest = %d\n",i); /*showing interest*/

    return 0;
}/*End of main function*/
