/*p-4.5*/
/*print largest integer smallest integer .... of a real number into one line*/

#include<stdio.h>
int main() /*start of main function*/
{
    float n,nl,ng;
    int s,l;  /*variable*/

    printf("Enter the real number: "); /*prompt*/
    scanf("%f",&n); /*taking the real number*/

    nl=n+1.0;
    ng=n-1.0;
    s=(int)n-1;  /*find the require value*/
    l=(int)n+1;

    printf("Smallest integer = %d  The given number = %f  Largest integer = %d  Not less than the number = %f  Not greater than the number = %f\n",s,n,l,nl,ng);  /*display result*/

    return 0;
} /*end of main function*/
