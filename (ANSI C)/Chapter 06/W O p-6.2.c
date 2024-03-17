/*worked out problem: 6.2*/
/*counts the boys number on condition into 10 boys*/

#include<stdio.h>

int main() /*main function start*/
{
    int count=0,i;
    float height,weight; /*variable*/

    printf("Enter the weight and height for 10 boys:\n"); /*prompt*/

    for(i=1;i<10;i++) /*loop for input 10 boys weight & height*/
    {
        scanf("%f%f",&weight,&height); /*taking weight and height*/

        if(weight<50 && height>170) /*condition*/
        {
            count++; /*count the number*/
        }
    } /*end loop*/

    printf("Number of boys with weight<50 and height>170 is = %d\n",count); /*display total number*/

    return 0;
} /*end of main function*/
