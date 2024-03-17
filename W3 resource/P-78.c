/*p-78*/
/*calculate predecrementing and postdecrementing*/

#include<stdio.h>

int main() /*main function start*/
{
    int x; /*variable*/

    x=10;
    printf("The real value of x is = %d\n",x);
    printf("The value of x after predecrement is, --x = %d\n",--x); /*display result*/
    x=10;
    printf("The value of x after postdecrement is, x-- = %d\n",x--);

    return 0;
}/*End of main function*/
