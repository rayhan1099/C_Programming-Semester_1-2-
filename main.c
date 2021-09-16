#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a,b,i;
    float k;
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        scanf("%d %d", &a, &b);
        k=a+(b*5/9.0);
     printf("Case %d: %.2lf\n",i,k);
    }
    return 0;
}

