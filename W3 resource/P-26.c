/*p-26*/
/*even number from 1 to 50*/

#include<stdio.h>
int main()/*main function start*/
{
    int i;

    for(i=1;i<=50;i++)
    {
        if(i%2==0)
        {
            printf("%d ",i); /*display result*/
        }
    }
    return 0;
}/*End of main function*/
