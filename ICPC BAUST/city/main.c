#include<stdio.h>
#include<stdlib.h>


void fun(char**a,int b,long long c)
{
	int t=0;
	if(c==0)
	   return;
	else
  {
	  if(b==0)
		{

		  t=c%10;
		  c=c/10;
		   fun(a,1,c);

       printf("%d %s ",t,a[b]);
		}
	   else
	   {
		  t=c%100;
		  c=c/100;
		   fun(a,b+1==4?0:b+1,c);
		  printf("%d %s ",t,a[b]);
	   }

	}

}

int main()
{
  char *d[4] = {"shata","hajar","lakh", "kuti"};
  long long rayhan,k;
  int t,i,j;
  int sum=0;
  while(i=1)
{ scanf("%lld",&rayhan);
  {for(j=1;j<=i;j++)

   sum=sum+j;
  printf("%4d. ",sum);
 }
    i++;
  {
  k=rayhan;
  t=k%100;
  k=k/100;
  fun(d,0,k);
  printf("%d",t);
  printf("\n");
}
}
return 0;
}
