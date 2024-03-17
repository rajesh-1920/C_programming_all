/*p-61*/
/*display the value of sin*/

#include<stdio.h>
#include<math.h>

int main() /*main function start*/
{
    float x=0,value=0; /*variable*/

    printf("Enter the value of x: "); /*prompt*/
    scanf("%f",&x); /*taking value of x*/

    if(x!=0)
    {
        value=sin(1/x); /*calculate value*/
        printf("\nSin(1/%f) = %.4f\n",x,value); /*display value*/
    }
    else
    {
        printf("\nThe value of x is not valid for sin(1/x)\n"); /*showing error*/
    }

    return 0;
}/*End of main function*/

