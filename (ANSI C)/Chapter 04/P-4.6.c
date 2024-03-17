/*p-4.6*/
/*calculate distance in a certain time*/

#include<stdio.h>
int main() /*start of main function*/
{
    float u,s,a,t=20; /*variable*/

    for(int i=0; i<=2; i++)
    {
        printf("Enter velocity: "); /*prompt*/
        scanf("%f",&u); /*taking velocity*/
        printf("Enter acceleration: "); /*prompt*/
        scanf("%f",&a); /*taking acceleration*/

        s=(u*t)+((a*t*t)/2.00); /*calculate distance*/
        printf("Distance = %.3f\n\n",s);  /*display distance*/
    }

    return 0;
} /*end of main function*/
