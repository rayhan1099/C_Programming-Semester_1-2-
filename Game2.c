#include <stdio.h>
#include <stdlib.h>

int main()
{ int n;
scanf("%d",&n);
int r,i,k,p,q,b=0;
for(i=1;i<=n;i++)
{ p=0;
  q=0;
    scanf("%d",&r);
    int a[r];
    for(k=0;k<r;k++)
        scanf("%d",&a[k]);
    for(k=1;k<r;k++)
    {
        b=a[k]-a[k-1];
        if(b>0){
           p=p+1;}
            else if(b<0){
                q=q+1;}
    }printf("Case %d: %d %d\n",i,p,q);
}
    return 0;
}
