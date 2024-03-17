/*p-4.16*/
/*use of cast operator*/

#include<stdio.h>
int main() /*start of main function*/
{
    int i;
    float f; /*variable*/
    char a;

    printf("Enter a floating-point number: ");  /*prompt*/
    scanf("%f",&f); /*taking value*/

    i=(int)f; /*casting value*/
    a=(char)i;

    printf("\nThe floating-point number = %f\n",f);
    printf("Integer value of the number = %d\n",i); /*display result*/
    printf("Character value number = %c\n",a);

    return 0;
} /*end of main function*/
