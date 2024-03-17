/*p-22*/
/*adding odd value using array*/

#include<stdio.h>
int main()/*main function start*/
{
    int n[5], sum=0, i; /*variable*/

    for(i=0;i<=4;i++) /*taking all  value by array*/
    {
        printf("input the %d th integer: ",i+1); /*prompt*/
        scanf("%d",&n[i]); /*taking value*/

        if(n[i]%2!=0) /*condition of odd number*/
        {
            sum=sum+n[i]; /*increasing sum*/
        }
    }

    printf("sum of all odd numbers: %d",sum); /*display sum*/

    return 0;
}/*End of main function*/
