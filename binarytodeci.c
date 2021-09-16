#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d, b, n, bin, tem;
    printf("Input Binary number\n");
    scanf("%d", &d);
    bin=0;
    tem=1;
    while(d>0){
            b=d%10;
            bin=bin+(b*tem);
            tem=tem*2;
            d=d/10;
            }
            printf("%d", bin);
return 0;
}
