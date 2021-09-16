#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,k,n,roll[100];
    printf("How many number:\n");
    scanf("%d",&n);
    printf("Input %d number below:\n",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&roll[i]);
    }
    for(i=0; i<n-1; i++)
    {
        for(k=0; k<n-1-i; k++)
        {
            if(roll[k]>roll[k+1])
            {
                int j=0;
                j=roll[k];
                roll[k]=roll[k+1];
                roll[k+1]=j;
            }
        }
    }
    printf("started is:\n");
    for(i=0; i<n; i++)
        printf("%d\n",roll[i]);
    return 0;
}
