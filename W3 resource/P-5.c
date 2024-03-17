/*p-5*/
/*Area & perimeter of a rectangle*/

#include<stdio.h>
int main()/*main function start*/
{
    int h=7, w=5, P=0, A=0; /*variable*/

    P=2*(h+w); /*calculation of perimeter of rectangle*/
    A=h*w; /*calculation of area of rectangle*/

    printf("Perimeter of the rectangle = %d inches\n",P);/*Display perimeter*/
    printf("Area of the rectangle = %d square inches\n",A);/*Display area*/

    return 0;
}/*End of main function*/

