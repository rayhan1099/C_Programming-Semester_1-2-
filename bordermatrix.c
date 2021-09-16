#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3][3], row, col;
    printf("Enter 3*3 matrix\n");
    for(row=0;row<3;row++)
    {
        for(col=0;col<3;col++)
        {
        scanf("%d", &a[row][col]);
        }
    }
    int sum=0;
    for(col=0;col<3;col++)
    {
        sum=sum+a[0][col];
    }
    for(col=0;col<3;col++)
    {
        sum=sum+a[2][col];
    }
    for(row=1;row<2;row++)
        sum=sum+a[row][0];
    for(row=1;row<2;row++)
        sum=sum+a[row][2];
    printf("Border = %d", sum);
    return 0;
}
