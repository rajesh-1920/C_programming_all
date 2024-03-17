/*p-65*/
/*find prime number into a range*/

#include<stdio.h>

int main() /*main function start*/
{
    int counter=0,i,j=2,test=0; /*variable*/

    printf("\nThe prime number between 1 and 200 is :\n"); /*start result display*/

    for(i=2; i<=200; i++) /*1st loop for find all numbers*/
    {
        if(i==2)
        {
            printf("%4d ",i); /*print 2 prime number*/
            counter++;
            continue;
        }
        for(j=2; j<i; j++) /*2nd loop for checking prime*/
        {
            if(i%j==0) /*check condition for prime number*/
            {
                test++; /*test will change for not prime*/
                break;
            }
        } /*end 2nd loop*/

        if(test==0) /*check condition if it stay into 0 then the number is prime*/
        {
            printf("%4d ",i); /*showing prime number*/
            counter++;
        }
        else
        {
            test=0;
        }

        if(counter==10) /*condition to print new line after 10 elements*/
        {
            printf("\n");
            counter=0;
        }

    } /*end 1st loop*/

    return 0;
}/*End of main function*/
