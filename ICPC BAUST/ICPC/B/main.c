#include <stdio.h>
#include <stdlib.h>

int main()
{ int n1,i,c=0,c1=0,j;
  scanf("%d",&n1);

 for(int i=0; i<n1; i++)
    {
         int n2;
        scanf("%d",&n2);
       int ara[n2];
        for(int i=0; i<n2; i++)
        {
            scanf("%d",&ara[i]);
        }
        if(n2==1)
        {
            int i;
            for(j=2; j<=100000000000; j++)
            {
                for( i=0; i<n2; i++)
                {
                    if(j/ara[i]==ara[i])
                    {
                        break;
                    }
                }
                if(j/ara[i]==ara[i])
                {

                    break;
                }

            }
        }
        else
        {
            for(j=2; j<=100000000000; j++)
            {
                for(  int i=0; i<n2; i++)
                {
                    if((j%ara[i])!=0 || (j/ara[i])==1)
                    {
                        break;

                    }
                    c++;
                    if(c==n2)
                    {
                        break;

                    }
                }
                if(c==n2)
                {
                    break;
                }
                else
                    c=0;
            }
            c=0;
        }
        c1++;
        printf("Case %d: %d\n",c1,j);


  }
    return 0;
}
