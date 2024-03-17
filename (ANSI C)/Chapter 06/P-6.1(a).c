/*p-6.1 (a)*/
/*find even or odd number without else*/

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
    if(n%2!=0) /*condition for odd*/
    {
        printf("NUMBER IS ODD\n"); /*display result for odd*/
    }
    return 0;
} /*start of main function*/
