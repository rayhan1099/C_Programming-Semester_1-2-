#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y,z, a, b;
    printf("Enter the 3 numbers: \n");
    scanf("%d%d%d", &x, &y, &z);
    a=(x>y && x>z)?x:((y>x && y>z)?y:z);
    b=(x<y && x<z)?x:((y<x && y<z)?y:z);
    printf("largest number= %d\nlowest number= %d\n", a, b);
    return 0;
}
