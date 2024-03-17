/*p-4.13*/
/*calculate call bill for each customer*/

#include<stdio.h>
int main() /*start of main function*/
{
    int n,i,c[100],nc[100];  /*variable*/
    float bil[100];

    printf("Enter total customer number: ");  /*prompt*/
    scanf("%d",&n);  /*taking total customer number*/

    for(i=0;i<n;i++)
    {
        printf("\nEnter customer code: ");  /*prompt*/
        scanf("%d",&nc[i]); /*taking code of customer*/

        printf("Enter calls number for customer %d : ",nc[i]);  /*prompt*/
        scanf("%d",&c[i]); /*taking calls number*/

        if(c[i]<=100)
        {
            bil[i]=(float)250;
            printf("\nMobile bill for customer %d is = %.3f\n",nc[i],bil[i]); /*showing result*/
        }
        else
        {
            bil[i]=(float)(250+(c[i]-100)*1.25); /*calculate bill*/
            printf("\nMobile bill for customer %d is = %.3f\n",nc[i],bil[i]); /*showing result*/
        }
    printf("\n");
    }

    return 0;
} /*end of main function*/
