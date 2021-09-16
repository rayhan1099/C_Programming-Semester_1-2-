#include <stdio.h>
#include <stdlib.h>

int main()
{int i,n,a,b,c,d;
scanf("%d",&n);
for(i=1;i<=n;i++){
     scanf("%d%d%d",&a,&b,&c);

      if (a<=20&&b<=20&&c<=20)
          {printf("Case %d: good\n",i);}
else
     printf("Case %d: bad\n",i);}
return 0;
}
