/*p-14*/
/*calculate bike's average consumption*/

#include<stdio.h>
int main() /*main function start*/
{
    int distance=0; /*variable*/
    float fuel=0, consump=0;

    printf("Input total distance in km: "); /*prompt*/
    scanf("%d",&distance); /*taking distance*/

    printf("Input total fuel spent in liters: "); /*prompt*/
    scanf("%f",&fuel); /*taking spent fuel*/

    consump=(float)distance/fuel; /*consumption calculate*/

    printf("Average consumption (km/lt) %.3f\n",consump); /*showing consumption*/

    return 0;
}/*End of main function*/

