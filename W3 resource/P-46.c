/*p-46*/
/*calculate some of a special series*/

#include<stdio.h>
int main() /*main function start*/
{
    float n=0,sum=1,j=3,k=2; /*variable*/
    printf("Input the value of the divider of the last elements of the series:  "); /*prompt*/
    scanf("%f",&n); /*taking last divider value*/

    for(k=2;k<=n;k=k*2)
    {
        sum=sum+(j/k); /*calculate the sum*/
        j=j+2; /*increasing value of j*/
    }
    printf("Value of S=%.3f\n",sum); /*showing result*/

    return 0;
}/*End of main function*/

