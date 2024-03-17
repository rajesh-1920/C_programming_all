/*p-19*/
/*check validity of input numbers*/

#include<stdio.h>
int main()/*main function start*/
{
    int p=0, q=0, r=0, s=0; /*variable*/

    printf("Input first integer: "); /*prompt*/
    scanf("%d",&p); /*taking value of p*/

    printf("Input second integer: "); /*prompt*/
    scanf("%d",&q); /*taking value of q*/

    printf("Input third integer: "); /*prompt*/
    scanf("%d",&r); /*taking value of r*/

    printf("Input fourth integer: "); /*prompt*/
    scanf("%d",&s); /*taking value of p*/

    if(q>0&&r>0&&s>0&&p%2==0&&q>r&&s>p&&r+s>p+q)/*start main if*/
    {
        printf("Correct values\n"); /*showing result for correct input*/
    } /*end main if*/
    else
    {
       printf("Wrong values\n"); /*display result for input mistake*/
    }
    return 0;
}/*End of main function*/
