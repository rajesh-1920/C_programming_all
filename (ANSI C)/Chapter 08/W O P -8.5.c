#include<stdio.h>
#define MAXGIRLS 4
#define MAXITEMS 3

int main(void)
{
    int value[MAXGIRLS][MAXITEMS],i,j,grand_total=0;
    int girl_total[MAXGIRLS],item_total[MAXITEMS];
    printf("Input data\nEnter values one at a time row-wise\n\n");
    for(i=0; i<MAXGIRLS; i++)
    {
        girl_total[i]=0;
        for(j=0; j<MAXITEMS; j++)
        {
            scanf("%d",&value[i][j]);
            girl_total[i]+=value[i][j];
            grand_total+=value[i][j];
        }
    }
    for(j=0; j<MAXITEMS; j++)
    {
        item_total[j]=0;
        for(i=0; i<MAXGIRLS; i++)
            item_total[j]+=value[i][j];
    }
    printf("\nGIRLS TOTAL \n\n");
    for(i=0; i<MAXGIRLS; i++)
        printf("Salesgirl[%d] = %d\n",i+1, girl_total[i]);
    printf("\nITEMS TOTAL \n\n");
    for(j=0; j<MAXITEMS; j++)
        printf("Item[%d] = %d\n",j+1, item_total[j]);
    printf("\nGrand total = %d\n",grand_total);

}
