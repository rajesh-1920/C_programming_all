#include<stdio.h>
int main(void)
{
    int i,j,car;
    int freequency[4][4]= {0};
    char city;
    printf("For each person, enter city code.\nFollowed by the car code.\nEnter the letter X to end..\n");
    for(i=1; i<=100; i++)
    {
        scanf("%c",&city);
        if(city=='x'||city=='X')
            break;
        scanf("%d",&car);
        switch(city)
        {
        case 'B':
        {
            freequency[0][car-1]++;
            break;
        }
        case 'C':
        {
            freequency[1][car-1]++;
            break;
        }
        case 'D':
        {
            freequency[2][car-1]++;
            break;
        }
        case 'M':
        {
            freequency[2][car-1]++;
            break;
        }
        }
    }
    printf("\n\n\t\tPOPULARITY TABLE\n");
    printf("-------------------------------------------------------------------------\n");
    printf("City\t\tAmbassador\tFiat\t\tDolphin\t\tMaruti\n");
    printf("-------------------------------------------------------------------------\n");
    for(i=0; i<4; i++)
    {
        switch(i)
        {
        case 0:
        {
            printf("Bombay\t\t");
            break;
        }
        case 1:
        {
            printf("Calcutta\t");
            break;
        }
        case 2:
        {
            printf("Delhi\t\t");
            break;
        }
        case 3:
        {
            printf("Madras\t\t");
            break;
        }
        }
        for(j=0; j<4; j++)
            printf("%d\t\t",freequency[i][j]);
        printf("\n");
    }
}

