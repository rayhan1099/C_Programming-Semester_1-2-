#include <stdio.h>
#include <stdlib.h>

int main()
{
    int R1,C1,sum=0;
    printf("Enter Matrix dimension Matrix1:\n");
    scanf("%d%d",&R1,&C1);
    int A[R1][C1],B[C1][R1];
    printf("enter data for 1st matrix:\n");
    int i,j;
    for(i=0; i<R1; i++)
    {
        for(j=0; j<C1; j++)
            scanf("%d",&A[i][j]);
    }
    for(i=0; i<R1; i++)
    {
        for(j=0; j<C1; j++)
        {
            sum=sum+A[i][j];
        }
    }
    printf("%d ",sum);
    return 0;
}
