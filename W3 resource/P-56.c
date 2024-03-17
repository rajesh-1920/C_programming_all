/*p-56*/
/*shift given data to left bit*/

#include<stdio.h>
int main() /*main function start*/
{
    int n=0,s=0; /*variable*/

    printf("Input the number: "); /*prompt*/
    scanf("%d",&n); /*taking n*/

    s=n<<2; /*sifted value*/

    printf("The left shifted value is = %d\n",s); /*showing result*/

    return 0;
}/*End of main function*/
