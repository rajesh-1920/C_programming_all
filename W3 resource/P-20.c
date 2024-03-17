/*p-20*/
/*Bhaskara's formula*/

#include<stdio.h>
int main()/*main function start*/
{
    float a=0, b=0, c=0, x1=0, x2=0, d=0; /*variable*/

    printf("Input the first number: "); /*prompt*/
    scanf("%f",&a); /*taking value of a*/

    printf("Input the second number: "); /*prompt*/
    scanf("%f",&b); /*taking value of b*/

    printf("Input the third number: "); /*prompt*/
    scanf("%f",&c); /*taking value of c*/

    d=(b*b-4*a*c); /*calculate discriminant*/
    if(d>=0&&a!=0) /*checking for real value*/
    {
      x1=(-b+sqrt(d))/(2*a); /*calculate value of root1*/
      x2=(-b-sqrt(d))/(2*a); /*calculate value of root2*/

      printf("Root1 = %f\n",x1); /*showing value of root1*/
      printf("Root1 = %f\n",x2); /*showing value of root2*/
    }
    else
    {
        printf("There have no real value of Root1 & Root 2\n"); /*showing error message*/
    }

    return 0;
}/*End of main function*/

