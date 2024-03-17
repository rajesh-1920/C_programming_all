/*p-64*/
/*calculate minimum maximum average of positive number*/

#include<stdio.h>

int main() /*main function start*/
{
    int n,s=0,max=0,min,counter=0; /*variable*/

    while(1)
    {
        printf("Input the number: "); /*prompt*/
        scanf("%d",&n); /*taking number*/

        if(n<=0)
        {
            break;
        }

        s=s+n; /*find the total of the numbers*/
        counter++; /*count total number of inputs*/

        if(max<n)
        {
            max=n; /*find maximum*/
        }
        if(min>n)
        {
            min=n; /*find minimum*/
        }
    }
    float ave=(float)s/counter; /*calculate average*/

    printf("\nNumber of positive value = %d\n",counter); /*showing total number of inputs*/
    printf("Maximum value is = %d\n",max); /*showing maximum*/
    printf("Minimum value is = %d\n",min); /*showing maximum*/
    printf("Average value is = %.4f\n",ave); /*showing maximum*/

    return 0;
}/*End of main function*/
