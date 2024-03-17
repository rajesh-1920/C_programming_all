/*p-75*/
/*separate number into digits*/

#include<stdio.h>

int main() /*main function start*/
{
    int n,d[10],i=0,j; /*variable*/

    printf("Enter your 7 digits number: "); /*prompt*/
    scanf("%d",&n); /*taking number*/

    while(n>0)
    {
        d[i]=n%10; /*calculate digit*/
        n=n/10;
        i++;
    }

    for(j=i-1;j>=0;j--)
    {
        printf("%d  ",d[j]); /*showing result*/
    }

    return 0;
}/*End of main function*/
