#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,p,k,n=3,roll[100],v,t,o;
    for(p=0; p<n; p++)
    {
        scanf("%d",&roll[p]);
        v=roll[0];
        t=roll[1];
        o=roll[2];
    }
    {
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
        {
            for(i=0; i<n; i++)
                printf("%d\n",roll[i]);
            printf("\n");
        }
    }
    {
        printf("%d\n%d\n%d\n",v,t,o);
    }
    return 0;
}
