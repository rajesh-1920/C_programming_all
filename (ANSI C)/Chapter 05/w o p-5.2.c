/*W O p-5.2*/
/*find a character is letter,digit or others*/

#include<stdio.h>
#include<ctype.h>
int main()  /*start of main function*/
{
    char character;  /*variable*/

    printf("Press any key: "); /*prompt*/
    character=getchar(); /*reading the character*/

    if(isalpha(character)>0) /*condition for letter*/
    {
        printf("The character is a letter\n");  /*display result*/
    }
    else if(isdigit(character)>0)
    {
        printf("The character is a digit\n");  /*display result*/
    }
    else
    {
        printf("The character is not alphanumeric\n");  /*display result*/
    }

    return 0;
}  /*end of main function*/
