/*p-6.11*/
/*checking right-angle triangle*/

#include<stdio.h>
int main() /*start of main function*/
{
    int x,y,z; /*variable*/

    printf("Enter the length of 3 sides of the triangle:\n"); /*prompt*/
    scanf("%d",&x); /*taking the value*/
    scanf("%d",&y); /*taking the value*/
    scanf("%d",&z); /*taking the value*/

    if(x+y>z && y+z>x && x+z>y)
    {
        if(x*x+y*y==z*z || x*x+z*z==y*y || y*y+z*z==x*x)
        {
            printf("The triangle is a right-angle triangle.\n"); /*display result*/
        }
        else
        {
            printf("The triangle is not a right-angle triangle.\n"); /*display result*/
        }
    }
    else
    {
        printf("It's not a triangle.\n"); /*showing error massage*/
    }

    return 0;
} /*end of main function*/
