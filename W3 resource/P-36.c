/*p-36*/
/*checking password*/

#include<stdio.h>
int main()/*main function start*/
{
   int n=0; /*variable*/

    printf("Enter the password (4 integers): "); /*prompt*/
    scanf("%d",&n); /*taking the password*/

   while(1)
   {

       if(n==1234)
        {
       printf("Correct password 'congratulation'\n"); /*display result*/
       break;
        }
        else
        {
        printf("Wrong password try again\n"); /*display result*/
        n=0;
        }
        printf("\n"); /*take a gap*/
         printf("Enter the password (4 integers): "); /*prompt*/
        scanf("%d",&n); /*taking the password*/
   } /*end while*/

   return 0;
}/*End of main function*/


