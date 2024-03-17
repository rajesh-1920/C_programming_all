/*p-6.5(a-d)*/
/*test admission eligible students*/

#include<stdio.h>
int main() /*start of main function*/
{
    int i,n,m[100],p[100],c[100],x=0; /*variable*/

    printf("Enter the candidates number: "); /*prompt*/
    scanf("%d",&n); /*taking total number of students*/
    printf("\n");

    for(i=0; i<n; i++) /*loop for taking numbers*/
    {
        printf("Enter the marks of Mathematics for students %d: ",i+1); /*prompt*/
        scanf("%d",&m[i]); /*taking number of math*/
        printf("Enter the marks of Physics for students %d: ",i+1); /*prompt*/
        scanf("%d",&p[i]); /*taking number of physics*/
        printf("Enter the marks of Chemistry for students %d: ",i+1); /*prompt*/
        scanf("%d",&c[i]); /*taking number of chemistry*/
        printf("\n");
    } /*end loop*/

    printf("\n");
    for(i=0; i<n; i++) /*loop for checking condition*/
    {
        if((m[i]>=60) && (p[i]>=50) && (c[i]>=40) && (((m[i]+c[i]+p[i])>=200) || ((m[i]+p[i])>=150))) /*checking all condition for eligible*/
        {
            printf("Candidates %d is eligible for admission.\n",i+1); /*display result*/
            x++; /*count total eligible students*/
        }
        else
        {
            printf("Candidates %d is not eligible for admission.\n",i+1); /*display result*/
        }
    } /*end loop*/

    printf("\nnumber of total eligible students is = %d\n",x); /*showing total eligible candidates*/

    return 0;
} /*end of main function*/
