#include <stdio.h>
#include <stdlib.h>

int main()
{int i,n,a,b,c;
    scanf("%d",&n);
      for(i=1;i<=n;i++)
    {
     scanf("%d %d%d",&a,&b,&c);
     if((a*a)+(b*b)==(c*c))
     {printf("Case %d: yes\n",i);}
     else {printf("Case %d: no\n",i);} }
return 0;
}
