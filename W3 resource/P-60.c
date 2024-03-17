/*p-60*/
/*create enumerated data type for seven days*/

#include<stdio.h>
#include<math.h>

int main() /*main function start*/
{
    enum {Sun,Mon,Tue,Wed,Thu,Fri,Sat};  /*enumerated variable*/

    printf("Sun = %d\n",Sun);  /*display result*/
    printf("Mon = %d\n",Mon);  /*display result*/
    printf("Tue = %d\n",Tue);  /*display result*/
    printf("Wed = %d\n",Wed);  /*display result*/
    printf("Thu = %d\n",Thu);  /*display result*/
    printf("Fri = %d\n",Fri);  /*display result*/
    printf("Sat = %d\n",Sat);  /*display result*/

    return 0;
}/*End of main function*/

