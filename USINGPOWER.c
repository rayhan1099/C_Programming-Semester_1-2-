#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{double x,y,i,j,k;
    scanf("%lf%lf%lf%lf",&x,&y,&i,&j);
    k= sqrt(pow((i-x),2)+pow((j-y),2));
    printf("%.4f\n",k);
    return 0;
}
