/*P-4.2*/
/*display two most right digit most digit*/

#include<stdio.h>
int main() /*start of main function*/
{
    float n; /*variable*/
    int a,i;

    printf("Enter the floating-point number: "); /*prompt*/
    scanf("%f",&n); /*taking the number*/

    a=(int)n; /*take integer part*/
    i=a%100; /*find the two most right digit*/
    printf("The right most digit of the number = %d\n",i); /*showing the digit*/

    return 0;
} /*end of main function*/
