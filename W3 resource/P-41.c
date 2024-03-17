/*p-41*/
/*print n line integers where each line has 3 integers*/

#include<stdio.h>
int main() /*main function start*/
{
    int i, n=0; /*variable*/

    printf("Input the number of integers: "); /*prompt*/
    scanf("%d",&n); /*taking number of integers*/

    i=1; /*started value*/
    while(1)
    {
        printf("%d ",i); /*showing result*/
        if(i==n)
        {
            break;
        }

        i++; /*increase value of i*/
        printf("%d ",i); /*showing result*/
        if(i==n)
        {
            break;
        }

        i++; /*increase value of i*/
        printf("%d\n",i); /*showing result*/
        if(i==n)
        {
            break;
        }

        i++; /*increase value of i*/
    }

   return 0;
}/*End of main function*/
