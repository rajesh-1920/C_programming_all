/*beecrowd p-1011*/
/*volume of a sphere*/

#include<stdio.h>
int main()
{
    double R=0,V=0,pi=3.14159;
    scanf("%lf",&R);
    V=((4.0/3.0)*(pi)*(R*R*R));
    printf("VOLOUME = %.3lf\n",V);
    return 0;
}
