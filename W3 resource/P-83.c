/*p-83*/
/*showing the total number of 3 in a number*/

#include<stdio.h>
int main() /*main function start*/
{
    int n,counter=0,d; /*variable*/

    printf("Enter the number: "); /*prompt*/
    scanf("%d",&n); /*taking the number*/

    while(n>1)
    {
        d=n%10; /*find digit*/
        if(d==3)
        {
            counter++; /*count the number of 3*/
        }
        n=n/10;
    }
    printf("The number of 3 is = %d\n",counter); /*showing result*/

    return 0;
}/*End of main function*/

