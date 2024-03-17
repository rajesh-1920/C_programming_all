/*p-85*/
/*showing roman numeral number*/

#include<stdio.h>
int main() /*main function start*/
{
    int i,n;

    printf("Enter the last number of the range: "); /*prompt*/
    scanf("%d",&n); /*taking value*/

    for(i=1;i<=n;i++)
    {
        printf("Decimal = %d   roman numeral = \n",i,i); /*showing result*/
    }
    return 0;
}/*End of main function*/

