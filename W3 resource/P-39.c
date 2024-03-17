/*p-39*/
/*find total of divisions into a range*/

#include<stdio.h>
int main() /*main function start*/
{
    int i, n1=0, n2=0, sum=0; /*variable*/

    printf("Input your first number: "); /*prompt*/
    scanf("%d",&n1); /*taking value*/
    printf("Input your second number: "); /*prompt*/
    scanf("%d",&n2); /*taking value*/

    if(n1>n2) /*setting n1 as smaller value*/
    {
        int temp=n1;
        n1=n2;
        n2=temp;
    }
    for(i=n1;i<=n2;i++)
    {
        if(i%17==0) /*checking divisible by 17*/
        {
            continue;
        }
        sum=sum+i; /*calculate total*/
    }

    printf("Sum:%d\n",sum); /*showing result*/

   return 0;
}/*End of main function*/

