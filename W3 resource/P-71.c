/*p-71*/
/*counting string length and copy into another*/

#include<stdio.h>

int main() /*main function start*/
{
    char a[100]="Hello",b[100],i=0; /*variable*/

    printf("Enter your word: "); /*prompt*/
    gets(b); /*take input*/

    printf("\nBefore copy a = %s\n",a); /*showing a before copy*/

    while(b[i]!='\0') /*end at null character*/
    {
        a[i]=b[i]; /*copy string*/
        i++;
    } /*end while loop*/
    printf("After copy a = %s\n\n",a); /*showing a after copy*/
    printf("Number of characters is = %d\n",i); /*display result*/

    return 0;
}/*End of main function*/
