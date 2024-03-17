/*p-63*/
/*sum of a series*/

#include<stdio.h>

int main() /*main function start*/
{
    long int n,m=1,i,s=0; /*variable*/

    printf("Input a positive number less than 100: "); /*prompt*/
    scanf("%ld",&n); /*taking number*/

    for(i=1;m<=n;i++)
    {
        s=s+(m*m*m*m); /*collect sum*/
        m=m+i;
    }

    printf("Sum of the serise is = %ld\n",s); /*showing result*/

    return 0;
}/*End of main function*/
