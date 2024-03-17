/*p-15*/
/*distance between two point*/

#include<stdio.h>
#include<math.h>
int main() /*main function start*/
{
    int x1=0, y1=0, x2=0, y2=0; /*variable for point*/
    float distance=0; /*variable for distance*/

    printf("Input x1: "); /*prompt*/
    scanf("%d",&x1); /*taking value of x1*/

    printf("Input y1: "); /*prompt*/
    scanf("%d",&y1); /*taking value of y1*/

    printf("Input x2: "); /*prompt*/
    scanf("%d",&x2); /*taking value of x2*/

    printf("Input y2: "); /*prompt*/
    scanf("%d",&y2); /*taking value of y2*/

    distance=(float)sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2))); /*calculate distance*/

    printf("Distance between the said point: %.4f",distance); /*display distance*/

    return 0;
}/*End of main function*/

