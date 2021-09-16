#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int j,n;
    scanf("%d",&n);
    double x1,x2,y1,y2,z1,z2,a,b,c,d,k;
    for(j=1;j<=n; j++)
    {
        scanf("%lf%lf%lf%lf%lf%lf",&x1, &x2, &y1, &y2, &z1, &z2);
        a=sqrt((x1-z1)*(x1-z1)+(x2-z2)*(x2-z2));
        b=sqrt((x1-y1)*(x1-y1)+(x2-y2)*(x2-y2));
        c=sqrt((z1-y1)*(z1-y1)+(z2-y2)*(z2-y2));
        k=acos((b*b+a*a-c*c)/(2*b*a));
        d=a*k;
        printf("Case %d: %.8lf\n",j,d);
    }
    return 0;
}

