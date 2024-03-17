/*p-58*/
/*find difference between maximum and minimum of four real number*/

#include<stdio.h>
int main() /*main function start*/
{
    float n[4],max=0,min=0,diff=0; /*variable*/

    printf("Input the four number:\n"); /*prompt*/

    for(int i=0;i<4;i++) /*taking 4 numbers*/
    {
        scanf("%f",&n[i]);
    }

    max=n[0]; /*let the first value as max/min*/
    min=n[0];

    for(int i=0;i<4;i++) /*taking 4 numbers*/
    {
        if(max<n[i]) {max=n[i];} /*swap max*/
        if(min>n[i]) {min=n[i];}/*swap max*/
    }

    diff=max-min; /*calculate difference*/
    printf("Difference is = %.4f\n",diff); /*showing value*/

    return 0;
}/*End of main function*/
