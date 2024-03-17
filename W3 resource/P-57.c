/*p-57*/
/*reverse a number*/

#include<stdio.h>
int main() /*main function start*/
{
    int n=0,r_n=0,x=0; /*variable*/

    printf("Input the number: "); /*prompt*/
    scanf("%d",&n); /*taking x*/

    printf("The reverse of said number = %d\n",n); /*display before reverse*/

    while(n>=1)
    {
        x=n%10;
        r_n=r_n*10+x;   /*reverse process*/
        n=n/10;
    }
    printf("The reverse of said number = %d\n",r_n); /*display after reverse*/

    return 0;
}/*End of main function*/
