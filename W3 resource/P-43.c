/*p-43*/
/*print p line integers where each line has q integers*/

#include<stdio.h>
int main() /*main function start*/
{
    int i,j=1,p=0,q=0; /*variable*/

    printf("Input the number of line: "); /*prompt*/
    scanf("%d",&p); /*taking number of integers*/
    printf("Input the number of integers in a line: "); /*prompt*/
    scanf("%d",&q); /*taking number of integers*/

    for(i=1;i<=p;i++) /*for line*/
    {
        for(j=j;j<=q*i;j++) /*for integers number in each line*/
        {
            printf("%d ",j); /*showing result*/
        }
    printf("\n");
    }

   return 0;
}/*End of main function*/
