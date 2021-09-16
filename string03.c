#include <stdio.h>
#include <stdlib.h>
#include<stdio.h>
int main()
{char c[100],i;
int d[100],j;gets(c);
scanf("%d",&d[100]);
for(i=0;i<=strlen(c);i++)
    for(j=0;j<=strlen(d);j++)
  {printf("%c%d",c[i],d[j]);
    if(c[i]==' ')
    printf("\n");
    if(d[j]==' ')
printf("\n");}
puts(c);
printf("%d",d);


    puts(c[i]);
    puts(d[j]);
    return 0;
}
