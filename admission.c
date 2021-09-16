#include <stdio.h>
#include <stdlib.h>

int main()
{
    double n1,n2,n3,n4,i,j,p,q,r;
    scanf("%lf%lf%lf%lf",&n1,&n2,&n3,&n4);
    p=(n1*2)+(n2*3)+(n3*4)+(n4*1);
    q=(2+3+4+1);
    i=p/q;
    printf("Media: %.1lf\n",i);
    if(i>=7.0)
    {
        printf("Aluno aprovado.\n");
    }
    if(i<5.0)
    {
        printf("Aluno reprovado.\n");
}
    if(i>=5.0&&i<=6.9)
    {
        {
            printf("Aluno em exame.\n");
        }
        scanf("%lf",&j);
        {
            printf("Nota do exame: %.1lf\n",j);
        }
        r=(i+j)/2;
        if(r>=5.0)
        {
            printf("Aluno aprovado.\n");
        }
        if(r<5.0)
        {
            printf("Aluno reprovado.\n");
        }

        printf("Media final: %.1lf\n",r);
    }
    return 0;
}
