/*worked out problem: 6.7*/
/*calculate loan ability*/

#include <stdio.h>
#define MAX 50000
int main() /*start of main function*/
{
    long int l1,l2,l3,sl,sum23; /*variable*/

    printf("Enter the value of previous two loan:\n"); /*prompt*/
    scanf("%ld%ld",&l1,&l2); /*taking previous loan*/
    printf("Enter the value new loan:\n"); /*prompt*/
    scanf("%ld",&l3); /*taking previous loan*/

    sum23=l2+l3;
    sl=(l1>0) ? 0 :((MAX<=sum23) ? MAX-l2 : l3); /*calculate sanctioning loan*/

    printf("\nprevious loan pending:\n%ld  %ld\n",l1,l2);
    printf("Loan requested = %ld\n",l3);
    printf("Loan sanctioned = %ld\n",sl);

    return 0;
} /*end of main function*/
