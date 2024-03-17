#include<stdio.h>
int main()
{
    char line[81],character;
    int c;
    c=0;
    printf("Enter text. press <enter> at end\n");
    do
    {
        character=getchar();
        line[c]=character;
        c++;
    }while(character!='\n');
    c--;
    line[c]='\0';
    printf("\n%s\n",line);
}
