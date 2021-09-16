#include <stdio.h>
#include <stdlib.h>

int main()
{int roll[50],i;float gpa[50];
    printf("Enter roll and GPA:\n");    for(i=0;i<50;i++)        {scanf("%d%f",&roll[i],&gpa[i]);
        printf("%d\n%f\n",roll[i],gpa[i]);}
    return 0;
}
