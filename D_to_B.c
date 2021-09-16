#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d, b, n, bin, tem;
    printf("Input Decimal number\n");
    scanf("%d", &d);
    bin=0;
    tem=1;
    while(d>0){
            b=d%2;
            bin=bin+(b*tem);
            tem=tem*10;
            d=d/2;
            }
            printf("%d", bin);
return 0;
}
