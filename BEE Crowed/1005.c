/*beecrowd P:-1005*/
/*average of two numbers*/

#include <stdio.h>
#include<math.h>
int main()
{
    double A,B,Ave=0;
    scanf("%lf",&A);
    scanf("%lf",&B);
    Ave=(((A*3.5)+(B*7.5))/(3.5+7.5));
    printf("MEDIA = %.5f\n",Ave);
    return 0;
}
