/*p-11*/
/*average value*/

#include<stdio.h>
int main() /*main function start*/
{
    float n1=0, n2=0, w1=0, w2=0, ave=0; /*variable*/

    printf("Weight of item1: "); /*prompt*/
    scanf("%f",&w1); /*read weight of one item 2*/

    printf("Number of item1: "); /*prompt*/
    scanf("%f",&n1); /*read number of item 1*/

    printf("Weight of item2: "); /*prompt*/
    scanf("%f",&w2); /*read weight of one item 2*/

    printf("Number of item2: "); /*prompt*/
    scanf("%f",&n2); /*read number of item 2*/

    ave=(((w1*n1)+(w2*n2))/(n1+n2)); /*average calculation*/

    printf("Average Value = %f",ave); /*Display value*/

    return 0;
}/*End of main function*/
