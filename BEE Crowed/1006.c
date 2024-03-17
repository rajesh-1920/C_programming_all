/*beecrowd P:-1006*/
/*average of 3 numbers */

#include <stdio.h>
#include<math.h>
int main()
{
    double A,B,C,Ave=0;
    scanf("%lf",&A);
    scanf("%lf",&B);
    scanf("%lf",&C);
    Ave=(((A*2)+(B*3)+(C*5))/(2+3+5));
    printf("MEDIA = %.1lf\n",Ave);
    return 0;
}
