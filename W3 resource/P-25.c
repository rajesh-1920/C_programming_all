/*p-25*/
/*checking month*/

#include<stdio.h>
int main()/*main function start*/
{
    int n;

    printf("Enter the number: "); /*prompt*/
    scanf("%d",&n); /*taking the number*/

    if(n==1){printf("January\n");} /*showing result*/
    else if(n==2){printf("February\n");} /*showing result*/
    else if(n==3){printf("March\n");} /*showing result*/
    else if(n==4){printf("April\n");} /*showing result*/
    else if(n==5){printf("May\n");} /*showing result*/
    else if(n==6){printf("June\n");} /*showing result*/
    else if(n==7){printf("July\n");} /*showing result*/
    else if(n==8){printf("August\n");} /*showing result*/
    else if(n==9){printf("September\n");} /*showing result*/
    else if(n==10){printf("October\n");} /*showing result*/
    else if(n==11){printf("November\n");} /*showing result*/
    else if(n==12){printf("December\n");} /*showing result*/
    else{printf("Out of range\n");} /*error message*/

    return 0;
}/*End of main function*/
