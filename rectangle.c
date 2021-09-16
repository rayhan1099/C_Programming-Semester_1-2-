#include <stdio.h>
#include <stdlib.h>

int main()
{int i,n,a,b,c,d;
    scanf("%d",&n);{
      for(i=1;i<=n;i++){
     scanf("%d%d%d%d",&a,&b,&c,&d);
      if (a==b&&b==c&&c==d&&d==a)
          printf("square\n");

     else if(a==c&&b==d||a==b&&c==d||b==c&&a==d)
         printf("rectangle\n");

       else   if(a<=b+c+d&&b<=a+c+d&&c<=a+b+d&&d<=a+b+c)
          printf("quadrangle\n");
else
     printf("banana\n");}}
return 0;
}
