/*W O p-5.3*/
/*reverse upper or lowercase and use putchar*/

#include<stdio.h>
#include<ctype.h>
int main()  /*start of main function*/
{
    char alphabet;  /*variable*/

    printf("Enter an alphabet: "); /*prompt*/
    alphabet=getchar(); /*reading the character*/

    if(islower(alphabet)) /*condition for letter*/
    {
        putchar(toupper(alphabet));  /*reverse and display result*/
        putchar('\n');
    }
    else
    {
        putchar(tolower(alphabet));  /*reverse and display result*/
        putchar('\n');
    }

    return 0;
}  /*end of main function*/
