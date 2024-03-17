/*p-72*/
/*find absolute value*/

#include<stdio.h>
#include<math.h>

int main() /*main function start*/
{
    int ab,n; /*variable*/

    printf("Enter your number: "); /*prompt*/
    scanf("%d",&n); /*taking value*/

    //ab=abs(n); /*getting absolute value by function*/
    ab=n;
    if(ab<0) /*getting positive value manually*/
    {
        ab=ab*(-1); /*getting positive value*/
    }

    printf("Absolute value = %d\n",ab); /*showing absolute value*/

    return 0;
}/*End of main function*/
