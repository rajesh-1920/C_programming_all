/*p-24*/
/*checking multiplied*/

#include<stdio.h>
int main()/*main function start*/
{
    int a, b, temp; /*variable*/

    printf("Enter the first number: "); /*prompt*/
    scanf("%d",&a); /*taking first number*/

    printf("Enter the second number: "); /*prompt*/
    scanf("%d",&b); /*taking second number*/

    if(a<b) /*finding largest number*//*if b is grater*/
    {
        temp=a;
        a=b;
        b=temp;
    }
    if(a%b==0) /*checking multiple condition*/
    {
        printf("Multiplied"); /*display result multiple*/
    }
    else
    {
        printf("Not Multiplied"); /*display result for not multiple*/
    }

    return 0;
}/*End of main function*/
