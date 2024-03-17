/*p-55*/
/*swap number without third variable*/

#include<stdio.h>
int main() /*main function start*/
{
    int x=0,y=0; /*variable*/

    printf("Input the value of x: "); /*prompt*/
    scanf("%d",&x); /*taking x*/
    printf("Input the value of y: "); /*prompt*/
    scanf("%d",&y); /*taking y*/

    printf("Before swapping the value of x & y: %d & %d\n",x,y); /*display before swapping*/

    x=x+y;
    y=x-y; /*swapping without third variable*/
    x=x-y;

    printf("Before swapping the value of x & y: %d & %d\n",x,y); /*display before swapping*/

    return 0;
}/*End of main function*/
