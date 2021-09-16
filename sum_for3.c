#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n,sum=0;
    printf("Input a number:\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            sum=sum+(i*j);

        }
    }
    printf("After interaction sum is %d\n",sum);

    return 0;
}
