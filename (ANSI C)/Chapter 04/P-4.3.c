/*p-4.3*/
/*display a number into a design */

#include<stdio.h>
int main()  /*start of main function*/
{
    int a[100],i=0,n,j,c=0,d; /*variable*/

    printf("Enter the number: "); /*prompt*/
    scanf("%d",&n); /*taking the number*/

    while(n>0) /*split the number into digit*/
    {
        a[i]=n%10;
        n=n/10;
        i++;
        c++;
    }

    printf("\n");
    d=c;

    for(i=0;i<=c;i++) /*display the number into digit*/
    {
        d--;
        for(j=d;j>=0;j--)
        {
            printf("%d ",a[j]); /*display*/
        }
    printf("\n");
    }

    return 0;
}  /*end of main function*/
