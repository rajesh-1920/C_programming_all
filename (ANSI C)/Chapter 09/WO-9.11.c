#include<stdio.h>
#include<string.h>
#define ITEMS 5
#define MAXCHAR 20
int main()
{
    char str[ITEMS][MAXCHAR],dumy[MAXCHAR];
    int i=0,j=0;
    printf("Enter the name of % items :\n",ITEMS);
    while(i<ITEMS)
        scanf("%s",str[i++]);
    for(i=0; i<ITEMS; i++)
    {
        for(j=0; j<ITEMS; j++)
        {
            if(strcmp(str[i],str[j])<0)
            {
                strcpy(dumy,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],dumy);
            }
        }
    }
    printf("\nALPHABETICAL LIST\n\n");
    for(i=0; i<ITEMS; i++)
        printf("%s\n",str[i]);
}
