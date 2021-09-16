#include <stdio.h>
#include <stdlib.h>

int main()
{int n;
scanf("%d",&n);
int a[n],b[n],c[n],i,j,l;
for(l=1;l<=n;l++){
    scanf("%d%d%d",&a[l],&b[l],&c[l]);}
    for(j=1;j<=n;j++)
    {
        for(i=1;i<=c[j];i++)
        {
            b[j]++;
            if(a[j]<b[j])
                b[j]=1;
        }
    printf("Case %d: %d\n",j,b[j]);}

    return 0;
}
