/*p-13*/
/*find maximum into three integer*/

#include<stdio.h>
int main()/*main function start*/
{
    int a=0 ,b=0, c=0, max=0; /*variable*/

    printf("Input the first integer: "); /*prompt*/
    scanf("%d",&a); /*take first integer value*/

    printf("Input the second integer: "); /*prompt*/
    scanf("%d",&b); /*take second integer value*/

    printf("Input the third integer: "); /*prompt*/
    scanf("%d",&c); /*take third integer value*/

    max=a; /*consider a as maximum value*/
    if(max<b)
    {
       max=b; /*swap value*/
    }
    if(max<c)
    {
        max=c; /*swap value*/
    }

    printf("Maximum value of three integers: %d\n",max); /*display result*/

    return 0;
}/*End of main function*/
