/*p-4.10*/
/*find largest value without if statement*/

#include<stdio.h>
int main() /*start of main function*/
{
    int n1,n2,n3,l; /*variable*/

    printf("Enter three number:\n"); /*prompt*/
    scanf("%d%d%d",&n1,&n2,&n3); /*taking the numbers*/

    l=((n1>n2)&&(n1>n3)) ? n1 : (((n2>n1)&&(n2>n3)) ? n2 : n3); /*calculate largest number*/

    printf("Largest number = %d\n",l); /*showing result*/

    return 0;
} /*end of main function*/
