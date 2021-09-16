
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
    int ip, sum=0,j=3-1;
    for(ip=0;ip<3;ip++)
    {
        sum= sum+(a[ip][ip]);
    }
        printf("principle diagonal = %d\n", sum);
        sum=0;
        for(ip=0;ip<3;ip++)
        {
            sum=sum+(a[ip][j]);
            j--;
        }printf("reversed diagonal=%d",sum);
    return 0;
}
