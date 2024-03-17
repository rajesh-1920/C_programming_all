/*p-49*/
/*print the value of an array which is multiple by 3*/

#include<stdio.h>
int main() /*main function start*/
{
    int a,n[5],i; /*variable*/

    printf("Enter the first members of the array: \n"); /*prompt*/
    scanf("%d",&a); /*taking first value*/

    printf("Array values are:\n"); /*display*/
    for(i=0;i<5;i++) /*showing value of the array*/
    {
        n[i]=a; /*assign a as first value*/

        printf("n[%d] = %d\n",i,n[i]); /*display result*/

        a=a*3; /*increase value by 3times*/
    }

    return 0;
}/*End of main function*/

