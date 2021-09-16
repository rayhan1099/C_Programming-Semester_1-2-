#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,fact=1;
    printf("input the number:\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++)

    {
        fact=fact*i;
    }
    printf("%d",fact);
    return 0;
}
