#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p,q,r,n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d%d",&p,&q,&r);
        if(p+q<=r||q+r<=p||p+r<=q)
        {
            printf("Wrong!!\n");
        }
        else
        {
            printf("OK\n");
        }
    }
    return 0;
}
