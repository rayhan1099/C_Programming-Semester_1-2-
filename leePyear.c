#include <stdio.h>
#include <stdlib.h>

int main()
{int y;
    printf("Input a year:\n");
    while(1){
     scanf("%d",&y);
     if(y%400==0||y%4==0&&y%100!=0)
     {
          printf("%d is leap year\n",y);
     }else
     {
          printf("%d is not leap year\n",y);
     }

     }
    return 0;
}
