/*p-16*/
/*divide value into possible bank notes*/

#include<stdio.h>
int main()/*main function start*/
{
    int total=0, n1,n2,n5,n10,n20,n50,n100; /*variable*/

    printf("Input the amount: "); /*prompt*/
    scanf("%d",&total); /*taking total amount*/

    n100=total/100; /*calculate note of 100*/
    printf("%d Note(s) of 100.00\n",n100); /*showing total tk100 notes*/

    total=total%100; /*calculate remaining total*/
    n50=total/50; /*calculate note of 50*/
    printf("%d Note(s) of 50.00\n",n50); /*showing total tk50 notes*/

    total=total%50; /*calculate remaining total*/
    n20=total/20; /*calculate note of 20*/
    printf("%d Note(s) of 20.00\n",n20); /*showing total tk20 notes*/

    total=total%20; /*calculate remaining total*/
    n10=total/10; /*calculate note of 10*/
    printf("%d Note(s) of 10.00\n",n10); /*showing total tk10 notes*/

    total=total%10; /*calculate remaining total*/
    n5=total/5; /*calculate note of 5*/
    printf("%d Note(s) of 5.00\n",n5); /*showing total tk5 notes*/

    total=total%5; /*calculate remaining total*/
    n2=total/2; /*calculate note of 2*/
    printf("%d Note(s) of 2.00\n",n2); /*showing total tk2 notes*/

    total=total%2; /*calculate remaining total*/
    n1=total/1; /*calculate note of 1*/
    printf("%d Note(s) of 1.00\n",n1); /*showing total tk1 notes*/

    return 0;
}/*End of main function*/
