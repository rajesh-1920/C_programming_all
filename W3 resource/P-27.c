/*p-27*/
/*count positive and negative number*/

#include<stdio.h>
int main()/*main function start*/
{
    int n[5], countp=0, countn=0, i; /*variable*/

    for(i=0;i<=4;i++) /*taking all  value by array*/
    {
        printf("input the %d th integer: ",i+1); /*prompt*/
        scanf("%d",&n[i]); /*taking value*/

        if(n[i]>0) /*condition of positive number*/
        {
            countp++; /*increasing the number of positive */
        }
        else if(n[i]<0) /*condition of negative number*/
        {
            countn++; /*increasing the number of negative */
        }
    }

    printf("Number of positive numbers: %d\n",countp); /*display positive number*/
    printf("Number of negative numbers: %d\n",countn); /*display negative number*/

    return 0;
}/*End of main function*/
