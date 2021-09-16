#include <stdio.h>
#include <stdlib.h>
int fun(int*x)
{
    printf("%d\n",*x);
    *x=*x+10;
    return*x;
}

int main()
{int res=5;
fun(&res);
printf("%d\n",res);
fun(&res);
    printf("%d\n",res);
    return 0;
}
