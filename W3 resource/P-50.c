/*p-50*/
/*taking the value of an array and find the position of a special value*/

#include<stdio.h>
int main() /*main function start*/
{
    float A[5];
    int i; /*variable*/

    printf("Enter the 5 members of the array: \n"); /*prompt*/
    for(i=0;i<5;i++) /*taking value of the array*/
    {
        scanf("%f",&A[i]);
    }

    for(i=0;i<5;i++) /*check the value value of the array*/
    {
        if(A[i]<5)
        {
            printf("A[%d] = %.1f\n",i,A[i]); /*showing result*/
        }
    }

    return 0;
}/*End of main function*/

