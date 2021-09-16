#include<stdio.h>
#include<string.h>

int main() {

    int i, j, len;
    char a[100];
    gets(a);
    int p=1;

    len=strlen(a);

     for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            if(i==j)
            continue;
            else if(a[i]==a[j])
            {
                p=0;
                break;
            }
        }
    }
    if(p)
    {
        printf("YES\n");

    }
    else
    {
        printf("NO\n");

    }

	return 0;
}
