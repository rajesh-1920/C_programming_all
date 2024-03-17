/*p-6.4(a-h)*/
/*find the number of  students in separated range*/

#include<stdio.h>
int main() /*start of main function*/
{
    int i,n,z[100],a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0; /*variable*/

    printf("Enter the students number: "); /*prompt*/
    scanf("%d",&n); /*taking total number of students*/
    printf("\n");

    for(i=0; i<n; i++) /*loop for taking numbers and checking condition*/
    {
        printf("Enter the marks for students %d: ",i+1); /*prompt*/
        scanf("%d",&z[i]); /*taking number*/

        if(z[i]>80)
        {
            a++; /*calculate total students who obtain more than 80 marks*/
        }
        if(z[i]>60)
        {
            b++; /*calculate total students who obtain more than 60 marks*/
        }
        if(z[i]>40)
        {
            c++; /*calculate total students who obtain more than 40 marks*/
        }
        if(z[i]<=40)
        {
            d++; /*calculate total students who obtain 40 or less marks*/
        }
        if(z[i]>80 && z[i]<=100)
        {
            e++; /*calculate total students who obtain (81 to 100) marks*/
        }
        if(z[i]>60 && z[i]<=80)
        {
            f++; /*calculate total students who obtain (61 to 80) marks*/
        }
        if(z[i]>40 && z[i]<=60)
        {
            g++; /*calculate total students who obtain (41 to 60) marks*/
        }
        if(z[i]>=0 && z[i]<=40)
        {
            h++; /*calculate total students who obtain (0 to 40) marks*/
        }

    } /*end loop*/

    printf("\n(a) Total %d students get more than 80 marks.\n",a); /*display result*/
    printf("(b) Total %d students get more than 60 marks.\n",b); /*display result*/
    printf("(c) Total %d students get more than 40 marks.\n",c); /*display result*/
    printf("(d) Total %d students get 40 or less marks.\n",d); /*display result*/
    printf("(e) Total %d students get (81-100) marks.\n",e); /*display result*/
    printf("(f) Total %d students get (61-80) marks.\n",f); /*display result*/
    printf("(g) Total %d students get (41-60) marks.\n",g); /*display result*/
    printf("(h) Total %d students get (0-40) marks.\n",h); /*display result*/

    return 0;
} /*end of main function*/
