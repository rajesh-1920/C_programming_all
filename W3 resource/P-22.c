/*p-22*/
/*adding odd value*/

#include<stdio.h>
int main()/*main function start*/
{
    int n1,n2,n3,n4,n5,sum=0; /*variable*/

    printf("Input the first number: "); /*take first value*/
    scanf("%d",&n1); /*taking first value*/

    printf("Input the second number: "); /*take first value*/
    scanf("%d",&n2); /*taking second value*/

    printf("Input the third number: "); /*take first value*/
    scanf("%d",&n3); /*taking third value*/

    printf("Input the fourth number: "); /*take first value*/
    scanf("%d",&n4); /*taking fourth value*/

    printf("Input the fifth number: "); /*take first value*/
    scanf("%d",&n5); /*taking fifth value*/

    if(n1%2!=0)  /*checking of odd number*/
    {
        sum=sum+n1;
    }
    if(n2%2!=0)
    {
        sum=sum+n2;
    }
    if(n3%2!=0)
    {
        sum=sum+n3;
    }
    if(n4%2!=0)
    {
        sum=sum+n4;
    }
    if(n5%2!=0)
    {
        sum=sum+n5;
    }

    printf("sum of all odd numbers: %d",sum); /*display sum*/

    return 0;
}/*End of main function*/
