#include<stdio.h>
#include<string.h>
int main()
{
    char str[30];
    int left,right,flag=1;
    printf("Enter a string : ");
    scanf("%s",str);
    left=0;
    right=strlen(str)-1;
    while(left<=right)
    {
        if(str[right]!=str[left])
        {
            flag=0;
            break;
        }
        left++;
        right--;
    }
    if(flag==1)
        printf("The string %s is a palindrome\n",str);
    else
        printf("The string %s is not palindrome\n",str);
}
