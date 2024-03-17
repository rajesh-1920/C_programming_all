/*p-28*/
/*count positive number and average of that number*/

#include<stdio.h>
int main()/*main function start*/
{
    int n[5], countp=0, s=0, i; /*variable*/

    for(i=0;i<=4;i++) /*taking all  value by array*/
    {
        printf("input the %d th integer: ",i+1); /*prompt*/
        scanf("%d",&n[i]); /*taking value*/

        if(n[i]>0) /*condition of positive number*/
        {
            s=s+n[i]; /*get total of the all positive numbers*/
            countp++; /*get the number of total positive numbers*/
        }

    } /*end of for loop*/

    float ave=(float)s/countp; /*calculate average*/

    printf("Number of positive numbers: %d\n",countp); /*display number of positive numbers*/
    printf("Average value of the positive numbers: %.2f\n",ave); /*display average of all positive number*/

    return 0;
}/*End of main function*/
