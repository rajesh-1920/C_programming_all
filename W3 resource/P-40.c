/*p-40*/
/*find division with reminder(2 or 3) into a range*/

#include<stdio.h>
int main() /*main function start*/
{
    int i, n1=0, n2=0; /*variable*/

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
        if(i%7==2 || i%7==3) /*checking divisible by 17*/
        {
            printf("%d\n",i); /*showing result*/
        }
    }

   return 0;
}/*End of main function*/
