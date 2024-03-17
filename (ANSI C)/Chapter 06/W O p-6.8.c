/*worked out problem: 6.8*/
/*find GCD of two numbers*/

#include<stdio.h>
int main() /*start of main function*/
{
    int n1,n2,temp,rem; /*variable*/

    printf("Enter the two number:\n"); /*prompt*/
    scanf("%d%d",&n1,&n2); /*taking the numbers*/

    if(n2>n1) /*find large number*/
    {
        temp=n1;
        n1=n2;
        n2=n1;
    }

    while(1)
    {
        rem=n1%n2;  /*calculate GCD*/
        n1=n2;
        if(rem==0)
        {
            printf("GCD is = %d\n",n2); /*showing GCD*/
            break;
        }
        n2=rem;
    }

    return 0;
} /*end of main function*/
