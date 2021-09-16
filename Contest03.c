#include <stdio.h>
#include<math.h>
int main()
{
 int n,t,a,b,c;
 scanf("%d",&n);{
 t=n/3;
 if(n%3==0)
 {
     if(t%3==0)
     {a=t-2;
     b=t+1;
     c=t+1;
         {printf("%d %d %d",a,b,c);}
     }
     else
       {
           a=t;
           b=t;
           c=t;
        {printf("%d %d %d",a,b,c);}}
 }
 if(n%3==1)
    {

if(t%3==1)
 {a=t;
 b=t;
 c=t+1;
     {printf("%d %d %d",a,b,c);}
 }
  if(t%3==2)
 {a=t-1;
 b=t;
 c=t+2;
     {printf("%d %d %d",a,b,c);}
 } if(t%3==0)
 {a=t-1;
 b=t+1;
 c=t+1;
     {printf("%d %d %d\n",a,b,c);}
 }
 }
 if(n%3==2)
 {
     if(t%3==0)
     {a=t-1;
     b=t+1;
     c=t+2;
         {printf("%d %d %d",a,b,c);}
     }if(t%3==1)
     {a=t;
     b=t+1;
     c=t+1;
         {printf("%d %d %d",a,b,c);}
     }
if(t%3==2)
{
    a=t;
    b=t;
    c=t+2;
         {printf("%d %d %d",a,b,c);}
    } }}

    return 0;
}
