/*p-4.12(a-d)*/
/*calculate sum, average, largest, smallest from 3 numbers*/

#include<stdio.h>
int main() /*start of main function*/
{
    int n1,n2,n3,l,s,sum; /*variable*/
    float ave;

    printf("Enter three number: ");  /*prompt*/
    scanf("%d%d%d",&n1,&n2,&n3);  /*taking value*/

    l=((n1>n2)&&(n1>n3)) ? n1 : (((n2>n1)&&(n2>n3)) ? n2 : n3);  /*find largest number*/
    s=((n1<n2)&&(n1<n3)) ? n1 : (((n2<n1)&&(n2<n3)) ? n2 : n3);  /*find smallest number*/
    sum=n1+n2+n3;   /*calculate sum*/
    ave=(float)sum/3;   /*calculate ave*/

    printf("Sum of the numbers = %d\n",sum);
    printf("Average of the numbers = %.3f\n",ave);
    printf("Largest number = %d\n",l);   /*display result*/
    printf("Smallest number = %d\n",s);

    return 0;
} /*end of main function*/
