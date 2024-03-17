/*calculation of speed*/
#include<stdio.h>
int main()/*start of main function*/
{
    int d=0,t=0; /*variable*/

    printf("Enter the distance:"); /*prompt*/
    scanf("%d",&d);/*take the distance*/

    printf("Enter the time:"); /*prompt*/
    scanf("%d",&t);/*take the time*/

    float s=(float) d/t; /*calculation*/
    printf("The speed of the car is=%.2f m/s\n",s); /*display result*/

    return 0;
}/*End of main function*/
