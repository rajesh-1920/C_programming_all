/*p-42*/
/*print n line integer where have square and cube*/

#include<stdio.h>
int main() /*main function start*/
{
    int i, n=0; /*variable*/

    printf("Input the number of integers: "); /*prompt*/
    scanf("%d",&n); /*taking number of integers*/

    i=1; /*started value*/
    while(i<=n)
    {
        printf("%d %d %d\n",i,(i*i),(i*i*i)); /*showing result*/
        i++; /*increase value of i*/
    }

   return 0;
}/*End of main function*/
