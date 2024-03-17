/*p-17*/
/*convert seconds to hours, minutes, seconds*/

#include<stdio.h>
int main()/*main function start*/
{
    int s=0, h=0, m=0; /*variable*/

    printf("Input Seconds: "); /*prompt*/
    scanf("%d",&s); /*taking seconds*/

    h=s/3600; /*calculate hours*/
    s=s%3600; /*calculate remaining seconds after hours*/
    m=s/60; /*calculate minutes*/
    s=s%60; /*calculate remaining seconds after minutes*/

    printf("There are H:M:S = %d:%d:%d\n",h,m,s); /*showing expected output*/

    return 0;
}/*End of main function*/
