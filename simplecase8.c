#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,p,q,i,j;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        int sum=0;
        scanf("%d%d",&p,&q);
        for(j=p; j<=q; j++)
            if(j%2==1)
                sum=sum+j;
        printf("Case %d: %d\n",i,sum);
    }
    return 0;
}
