/*p-84*/
/*calculate average of some integers*/

#include<stdio.h>
int main() /*main function start*/
{
    int n,counter=0,sum=0; /*variable*/
    float ave;

    while(1)
    {
        printf("Enter number (888 to exit): "); /*prompt*/
        scanf("%d",&n); /*taking number*/

        if(n==888)
        {
            break; /*terminate the loop*/
        }
        sum=sum+n; /*calculate total of the number*/
        counter++; /*count total inputed number*/
    }
    ave=(float)sum/counter; /*calculate average*/

    printf("\nThe average is = %f\n",ave); /*showing result*/

    return 0;
}/*End of main function*/

