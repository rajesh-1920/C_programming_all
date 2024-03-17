/*p-6.9(c)*/
/*find the value of a function using conditional operators*/

#include<stdio.h>
int main() /*start of main function*/
{
    int x,y; /*variable*/

    printf("Enter the value of x: "); /*prompt*/
    scanf("%d",&x); /*taking the value of x*/

    y=((x>0) ? 1 :(x==0) ? 0 : -1); /*find value of the function*/

    printf("y = %d\n",y); /*showing result*/

    return 0;
} /*end of main function*/
