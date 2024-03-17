#include<stdio.h>
#define LOOP 100
#define ACC 0.0001
int main(void)
{
    int i;
    float x,sum=0.0,term=1.0;
    printf("Enter the value of x:");
    scanf("%f",x);
    for(i=0; i<LOOP; i++)
    {
        sum+=term;
        if(term<=ACC)
            goto output;
        term*=x;
    }
    printf("Final value of n isn't sufficient to achieve desired accuracy.");
    goto end;
    output:
    printf("Sum = %f\nTotal numbers = %d\n",sum,i+1);
    end:
    ;
}
