#include<stdio.h>
int main(void)
{
    int t,i;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        char ch;
        scanf("\n%c",&ch);
        switch(ch)
        {
        case 'c' :
        {
            printf("YES\n");
            break;
        }
        case 'o' :
        {
            printf("YES\n");
            break;
        }
        case 'd' :
        {
            printf("YES\n");
            break;
        }
        case 'e' :
        {
            printf("YES\n");
            break;
        }
        case 'f' :
        {
            printf("YES\n");
            break;
        }
        case 'r' :
        {
            printf("YES\n");
            break;
        }
        case 's' :
        {
            printf("YES\n");
            break;
        }
        default :
        {
            printf("NO\n");
            break;
        }
        }
    }
}
