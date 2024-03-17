/*p-6.14""*/
/*checking prime number*/

#include<stdio.h>
int main() /*start of main function*/
{
    int i,j,c,count=0; /*variable*/

    for(i=100; i<=200; i++)
    {
        c=0;
        for(j=2; j<=i/2; j++)
        {
            if(i%j==0)
            {
                c++;
                break;
            }
        }
        if(c==0)
        {
            printf("%d  ",i); /*showing prime number*/
            count++;
        }
    }

    printf("\nTotal prime number = %d\n",count); /*showing total prime numbers number*/

    return 0;
} /*end of main function*/
