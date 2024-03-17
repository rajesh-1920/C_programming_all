#include<stdio.h>
struct marks
{
    int sub1,sub2,sub3,total;
};
int main(void)
{
    struct marks st[3]={{45,67,81,0},{75,53,69,0},{57,36,71,0}},sum={0,0,0,0};
    int i;
    for(i=0;i<3;i++)
    {
        st[i].total=st[i].sub1+st[i].sub2+st[i].sub3;
        sum.sub1+=st[i].sub1;
        sum.sub2+=st[i].sub2;
        sum.sub3+=st[i].sub3;
        sum.total+=st[i].total;
    }
    printf("Student Total\n");
    for(i=0;i<3;i++)
    printf("student[%d] = %d\n",i+1,st[i].total);
    printf("\nSubjected Total\n");
    printf("Sub1 = %d\nSub2 = %d\nSub3 = %d\n",sum.sub1,sum.sub2,sum.sub3);
    printf("\nGrand total = %d\n",sum.total);
}
