/*p-6.1 (b)*/
/*find even or odd number with else*/

#include<stdio.h>
int main() /*start of main function*/
{
    int n; /*variable*/

    printf("Enter the number: "); /*prompt*/
    scanf("%d",&n); /*taking the value*/

    if(n%2==0) /*condition for even*/
    {
        printf("NUMBER IS EVEN\n"); /*display result for even*/
    }
    else
    {
        printf("NUMBER IS ODD\n"); /*display result for odd*/
    }
    return 0;
} /*start of main function*/
