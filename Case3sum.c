#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n,i,j,p,q,sum;
    char k,a[500];
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        sum=0;k=0;
        scanf("%d",&p);
        for(j=0; j<p; j++)
        {
            scanf("%s",&a);
            if(a[0]=='d')
            {
                scanf("%d",&q);
                sum=sum+q;
            }
            else
            {
                if(!k)
                {
                    k=1;
                    printf("Case %d:\n%d\n",i,sum);
                }
                else
                    printf("%d\n",sum);
            }
        }
    }
    return 0;
}
