/*p-23*/
/*checking triangle*/

#include<stdio.h>
int main()/*main function start*/
{
    float a, b, c, p=0; /*variable*/

    printf("Enter the first number: "); /*prompt*/
    scanf("%f",&a); /*taking first number*/

    printf("Enter the second number: "); /*prompt*/
    scanf("%f",&b); /*taking second number*/

    printf("Enter the third number: "); /*prompt*/
    scanf("%f",&c); /*taking third number*/

    if(a+b>c && b+c>a && c+a>b) /*condition to be a triangle*/
    {
        printf("It is possible to create a triangle\n"); /*showing possibility result*/
        p=a+b+c; /*calculate perimeter*/
        printf("Perimeter = %.2f\n",p); /*showing perimeter*/
    }
    else
    {
        printf("It is impossible to create a triangle\n"); /*showing error*/
    }

    return 0;
}/*End of main function*/
