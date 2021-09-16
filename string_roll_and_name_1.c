#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,k,n,roll[100];
    printf("How many words:\n");
    scanf("%d",&n);
    char name[n][100];
    printf("Input %d name and below:\n",n);
    for(i=0; i<n; i++)
    {
        fflush(stdin);
        gets(name[i]);
        scanf("%d",&roll[i]);
    }
    for(i=0; i<n-1; i++)
    {
        for(k=0; k<n-1-i; k++)
        {
            if(roll[k]>roll[k+1])
            {
                char temp[100];
                int j=0;
                strcpy(temp,name[k]);
                strcpy(name[k],name[k+1]);
                strcpy(name[k+1],temp);
                j=roll[k];
                roll[k]=roll[k+1];
                roll[k+1]=j;
            }
        }
    }
    printf("started name is:\n");
    for(i=0; i<n; i++)
        printf("%s\t %d\n",name[i],roll[i]);
    return 0;
}
