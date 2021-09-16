#include <stdio.h>
#include <stdlib.h>

int main()
{int i,j,n,count[26];for(j=0;j<26;j++)    count[j]=0;char a[30];gets(a);n=strlen(a);for(i=0;i<n;i++){    for(j=0;j<n;j++){            if(a[i]==97+j || a[i]==65+j)        count[j]++;    }}for(j=0;j<26;j++)
    printf("%c occured %d times\n",65+j,count[j]);
    return 0;
}
