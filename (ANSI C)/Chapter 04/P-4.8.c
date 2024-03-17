/*p-4.8*/
/*calculate frequency of an electric circuit*/

#include<stdio.h>
#include<math.h>
int main() /*start of main function*/
{
    double Fr,L,C,R; /*variable*/

    printf("Enter inductance: ");
    scanf("%lf",&L);
    printf("Enter resistance: "); /*prompt*/
    scanf("%lf",&R);   /*taking value*/
    printf("Enter capacitance: ");
    scanf("%lf",&C);

    Fr=sqrt(((1.0)/(L*C))-((R*R)/(4.0*C*C)));  /*calculate frequency*/

    printf("Frequency = %lf\n",Fr); /*showing result*/

    return 0;
} /*end of main function*/
