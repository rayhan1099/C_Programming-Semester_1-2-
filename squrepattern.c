#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(1)
        {
    int n,i,j,k,l,m;
    scanf("%d",&n);
    if(n==0)

        break;

    int pat[n][n];
    int a=1,b,c=0;
    b=n;
   for(k=0;k<n;k++)
    {
    for(i=k;i<b;i++)
    {
        for(j=k;j<b;j++)
        {
            if(i==c)
                pat[i][j]=a;
            if(i==(b-1))
                pat[i][j]=a;
            if(((i!=c)&&i!=(b-1)) && ((j==c) || (j==(b-1))))
                pat[i][j]=a;
        }
    }
    c++;
        b--;
        a++;
    }
    for(l=0;l<n;l++)
    {
        for(m=0;m<n;m++)
        {
             printf("%3d",pat[l][m]);
             if(m<n-1)
                printf(" ");
                else
                    printf("\n");
        }


    }
    printf("\n");
        }
    return 0;
}
