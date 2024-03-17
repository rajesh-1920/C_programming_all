#include<stdio.h>
int main()
{
    char c;
    for(c='A';c<='z';c++)
    {
        if(c>'Z'&&c<'a')
            continue;
        printf("|%4d - %c  ",c,c);;
    }
    printf("\n");
}
