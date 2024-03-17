/*p-54*/
/*convert cm to inches*/

#include<stdio.h>
int main() /*main function start*/
{
    float cm=0,in=0; /*variable*/

    printf("Input the centimeters: "); /*prompt*/
    scanf("%f",&cm); /*taking centimeter*/

    in=cm/2.54; /*calculate inches*/

    printf("Distance of %.2f cm is = %.2f inches\n",cm,in); /*showing inches*/

    return 0;
}/*End of main function*/
