#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b,n,i,j,big,r,p=0,q;
    scanf("%d",&n);
      int sum=0,k=0;
    for(r=1; r<=n; r++)
       {
        scanf("%d",&q);
        int a[q];
        for(i=1; i<=q;i++)
            scanf("%d",&a[i]);
        for(i=1; i<=q;i++)
        {
            p=a[i]-a[i-1];
            if(p>0)
            {
                sum=sum+1;
            }
            else if(p<0)
            {
                k=k+1;
            }
        }
        printf("Case %d: %d %d\n",r,sum,k);
        }
    return 0;
}
