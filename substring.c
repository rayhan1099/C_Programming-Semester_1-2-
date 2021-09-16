#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Input a sentence:\n");
    char a[500];
    gets(a);
    printf("Input the word:\n");
    char b[50];
    scanf("%s",b);
    int len=strlen(b);
    int i,c=0;
    int p[100];
    for(i=0;a[i]!='\0';i++);
    {
        char x[len];
        for(int j=0;j<len;j++)
        {
            x[j]=a[i+j];
        }if(strcmp(x,b)==0){
        p[c]=i;
        c++;}
    }
    printf("Occurrence: %d\n",c);
    printf("Location: ");
    for(int k=0;k<c;k++)
    {
        printf("%d ",p[c]);
    }printf("\n");

    return 0;
}
