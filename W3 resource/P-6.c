/*p-6*/
/*Area & perimeter of a Circle*/

#include<stdio.h>
int main() /*main function start*/
{
    float r=5, pi=3.14159, P=0, A=0; /*variable*/

    P=2*pi*r; /*calculation of perimeter of circle*/
    A=r*pi*r; /*calculation of area of circle*/

    printf("Perimeter of the Circle = %.3f inches\n",P); /*Display perimeter*/
    printf("Area of the Circle = %.3f square inches\n",A); /*Display area*/

    return 0;
}/*End of main function*/
