#include <stdio.h>
#include <stdlib.h>

int main()
{ int p,q;
   scanf("%d%d",&p,&q);
    int a[q],c,r,i,j,k;
    double s;
    for(j=0;j<q;j++)
        scanf("%d",&a[j]);
        r=1;
      for(k=0;k<p;k++)
        {
            c=0;
            for(j=0;j<q;j++)
            {
                if(a[j]==r)
                    c++;
            }
           r++;
           s=c;
        printf("%.2lf%c\n",100.0*(s/q),'%');
}

return 0;
}
