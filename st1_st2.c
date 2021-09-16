#include <stdio.h>
#include <stdlib.h>

int main()
{
    int st1[100],st2[100],i,result;
    gets(st1);
    gets(st2);
    for(i=0; i<100; i++)
    {
        if(st1[i]==NULL&&st2[i]==NULL)
        {
            result=0;
            break;
        }
        if(st1[i]!=st2[i])
            result=st1[i]-st2[i];
        break;
    }
    if(result>0)
    {
        printf("First\n%s\nthen\n%s\n",st2,st1);
    }
    if(result<0)
    {
        printf("First\n%s\nthen\n%s\n",st1,st2);
    }
    return 0;
}
