/*p-51*/
/*take and swap the value of an array*/

#include<stdio.h>
int main() /*main function start*/
{
    int array[5],i,j=0; /*variable*/

    printf("Enter the 5 members of the array: \n"); /*prompt*/
    for(i=0;i<5;i++) /*taking value of the array*/
    {
        scanf("%d",&array[i]);
    }

    printf("After swaping array values are:\n"); /*display*/
    for(i=4;i>=0;i--) /*showing value of the array after swap*/
    {
        printf("array_n[%d] = %d\n",j,array[i]);
        j++; /*increase position*/
    }

    return 0;
}/*End of main function*/
