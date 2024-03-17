#include<stdio.h>
struct marks
{
    int sub[3],total;
};
int main(void)
{
    struct marks st[3]={{45,67,81,0},{75,53,69,0},{57,36,71,0}},sum={0,0,0,0};
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            st[i].total+=st[i].sub[j];
            sum.sub[j]+=st[i].sub[j];
        }
        sum.total+=st[i].total;
    }
    printf("Student Total\n");
    for(i=0;i<3;i++)
    printf("student[%d] = %d\n",i+1,st[i].total);
    printf("\nSubjected Total\n");
    for(j=0;j<3;j++)
    printf("Sub[%d] = %d\n",j+1,sum.sub[j]);
    printf("\nGrand total = %d\n",sum.total);
}
