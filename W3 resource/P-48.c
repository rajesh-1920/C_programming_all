/*p-48*/
/*take and print the value of an array*/

#include<stdio.h>
int main() /*main function start*/
{
    int n[5],i; /*variable*/

    printf("Enter the 5 members of the array: \n"); /*prompt*/
    for(i=0;i<5;i++) /*taking value of the array*/
    {
        scanf("%d",&n[i]);
    }

    printf("Array values are:\n"); /*display*/
    for(i=0;i<5;i++) /*showing value of the array*/
    {
        printf("n[%d] = %d\n",i,n[i]);
    }

    return 0;
}/*End of main function*/

