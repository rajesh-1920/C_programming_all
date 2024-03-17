/*beecrowd p-1010*/
/*simple calculate*/

#include<stdio.h>
int main()
{
    int p1,n1,p2,n2;
    float m1=0,m2=0,total=0;
    scanf("%d%d%f",&p1,&n1,&m1);
    scanf("%d%d%f",&p2,&n2,&m2);
    total=(float)((m1*n1)+(m2*n2));
    printf("VALOR A PAGAR: R$ %.2f\n",total);
    return 0;
}
