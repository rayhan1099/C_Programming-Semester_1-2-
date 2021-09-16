#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
    char p[10],l,k=0;
    while(gets(p))
    {
        k++;
        l=strlen(p);
        if(l==1)
            return 0;
        else if(l==4)
        {
            printf("Case %d: Hajj-e-Akbar\n",k);
        }
        else if(l==5)
        {
            printf("Case %d: Hajj-e-Asghar\n",k);
        }
        else if(p[0]=='*')
            break;
    }
    return 0;
}
