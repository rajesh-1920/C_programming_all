#include<stdio.h>
#define MAXVAL 50
#define COUNTER 11
int main(void)
{
    int i,low,high,group[COUNTER]={0,0,0,0,0,0,0,0,0,0,0};
    float value[MAXVAL];
    for(i=0;i<MAXVAL;i++)
    {
        scanf("%f",&value[i]);
        group[(int)value[i]/10]++;
    }
    printf("\nGROUP    RANGE     FREQUENCY\n");
    for(i=0;i<COUNTER;i++)
    {
        low=i*10;
        if(i==10)
        {
            low=100;
        }
        high=low+9;
        printf("%2d    %3d to %3d    %2d\n",i+1,low,high,group[i]);
    }
}

