/*P-6.7(b)*/
/*Modify form of Floyd's triangle*/

#include<stdio.h>
int main() /*start of main function*/
{
    int i,j,n,rem; /*variable*/

    for(i=1;1;i++) /*loop for row*/
    {
        n=i;
        for(j=1;j<=i;j++) /*loop for column*/
        {
            rem=n%2;
            printf("%d",rem);
            n++;
        }
        printf("\n");
    if(n>31)
    {
        break;
    }
    }

    return 0;
} /*end of main function*/
