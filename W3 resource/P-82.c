/*p-82*/
/*checking a number is palindrome or not*/

#include<stdio.h>

int main()/*start of main function*/
{
    int r_n=0,n,n1,temp; /*variable*/

    printf("Enter the number: "); /*prompt*/
    scanf("%d",&n); /*taking number*/

    n1=n; /*assign n to a temporary variable*/

    while(n>0)
    {
        temp=n%10;
        r_n=(r_n*10)+temp; /*calculate reverse number*/
        n=n/10;
    }

    if(r_n==n1)
    {
        printf("\nThe number is a palindrome number\n"); /*display result*/
    }
    else
    {
        printf("\nThe number is not a palindrome number\n"); /*display result*/
    }

    return 0;
}/*End of main function*/
