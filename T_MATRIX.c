#include <stdio.h>
#include <stdlib.h>

int main()
{
    int R1,C1;
    printf("Enter matrix dimension matrix one:\n");
    scanf("%d%d",&R1,&C1);
    int A[R1][C1],B[C1][R1];
    printf("Enter data for matrix:\n");
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
            B[j][i]=A[i][j];
        }
    }
    for(i=0; i<C1; i++)
    {
        for(j=0; j<R1; j++)
        {
            printf("%d ",B[j][i]);
        }
        printf("\n");
    }
    return 0;
}
