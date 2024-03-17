/*p-4.17*/
/*shift given data by two bits to left*/

#include<stdio.h>
int main() /*start of main function*/
{
    int n=0,s=0; /*variable*/

    printf("Input the number: "); /*prompt*/
    scanf("%d",&n); /*taking value*/

    s=n<<2; /*shifted value*/

    printf("The left shifted value is = %d\n",s); /*display result*/

    return 0;
}  /*end of main function*/
