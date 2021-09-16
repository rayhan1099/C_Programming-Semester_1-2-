#include <stdio.h>
#include <stdlib.h>
int fun(int p,int q)
{
    int sum;
    sum=p+q;
    printf("sum= %d\n",sum);
}

int main()
{
    int sum,a=5,b=10;
    fun(a,b);

}
