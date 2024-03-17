/*p-52*/
/*find smallest number by array*/

#include<stdio.h>
int main() /*main function start*/
{
    int n[5],i,min=0,p=0; /*variable*/

    printf("Enter the 5 members of the array: \n"); /*prompt*/
    for(i=0;i<5;i++) /*taking value of the array*/
    {
        scanf("%d",&n[i]);
    }

    min=n[0]; /*let the first number as small*/

    for(i=0;i<5;i++)
    {
        if(n[i]<min)
        {
            min=n[i]; /*change the small number*/
            p=i+1; /*find position*/
        }
    }
    printf("smallest value: %d\n",min); /*showing smallest value*/
    printf("Position: %d\n",p); /*showing position*/

    return 0;
}/*End of main function*/
