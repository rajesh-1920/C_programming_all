/*p-29*/
/*getting sum of inputed odd values*/

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
            sum=sum+n[i]; /*get total of the all odd numbers*/
        }

    } /*end of for loop*/

    printf("Sum of all odd numbers: %d\n",sum); /*display sum of all odd number*/

    return 0;
}/*End of main function*/

