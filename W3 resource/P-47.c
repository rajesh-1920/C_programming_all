/*p-47*/
/*find the divisor of an integer*/

#include<stdio.h>
int main() /*main function start*/
{
    int n=0,i=0; /*variable*/
    printf("Enter the number: "); /*prompt*/
    scanf("%d",&n); /*taking the value*/

    printf("All the divisor of %d are:\n",n); /*display*/

    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("%d\n",i); /*showing result*/
        }
    }

    return 0;
}/*End of main function*/

