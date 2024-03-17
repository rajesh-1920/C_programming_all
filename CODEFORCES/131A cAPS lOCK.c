#include<stdio.h>
int main(void)
{
    int i,c=0,t=1,t1=0;
    char a[110];
    scanf("%s",a);
    for(i=0; i<200; i++)
    {
        if(islower(a[0]))
        {
            if(a[i]=='\0')
            {
                break;
            }
            else if(isupper(a[i]))
            {
                t++;
            }
        }
        else if(a[i]=='\0')
        {
            break;
        }
        else if(isupper(a[i]))
        {
            t1++;
        }
        c++;
    }
    if(c==t||c==t1)
    {
        for(i=0; i<200; i++)
        {
            if(a[i]=='\0')
            {
                break;
            }
            else if(isupper(a[i]))
            {
                a[i]=tolower(a[i]);
            }
            else if(islower(a[i]))
            {
                a[i]=toupper(a[i]);
            }
        }
        printf("%s\n",a);
    }
    else
    {
        printf("%s\n",a);
    }
}
