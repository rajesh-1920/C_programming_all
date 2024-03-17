/*p-6.13*/
/*find total of integers divided by 6 and not divided by 4 from 0 to 100*/

#include<stdio.h>
int main() /*start of main function*/
{
    int i,sum=0; /*variable*/

    for(i=0;i<=100;i++)
    {
        if(i%6==0 && i%4!=0)
        {
            sum=sum+i; /*calculate total sum*/
        }
    }

    printf("Sum = %d\n",sum); /*showing result*/

    return 0;
} /*end of main function*/
