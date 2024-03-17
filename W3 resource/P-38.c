/*p-38*/
/*division of two numbers*/

#include<stdio.h>
int main() /*main function start*/
{
    int a=0, b=0; /*variable*/

    printf("Enter the first number: "); /*prompt*/
    scanf("%d",&a); /*taking first number*/
    printf("Enter the second number: "); /*prompt*/
    scanf("%d",&b); /*taking second number*/

    if(b!=0) /*checking the possibility of division*/
    {
         float d=(float)(a/b); /*calculate division*/
        printf("%d/%d = %.2f\n",a,b,d); /*showing result*/
    }
    else
    {
        printf("Division is not possible\n"); /*showing result*/
    }

   return 0;
}/*End of main function*/

