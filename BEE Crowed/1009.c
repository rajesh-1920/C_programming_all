/*beecrowd p-1009*/
/*salary of employee with bonus*/

#include<stdio.h>
int main()
{
    char n[30];
    double fs,scale,total;
    gets(n);
    scanf("%lf%lf",&fs,&scale);
    total=fs+(scale*0.15);
    printf("TOTAL = R$ %.2lf\n",total);
    return 0;
}
