#include <stdio.h>
#include <string.h>

void sort123(float*, int*, char*, int);

int main()
{
    int max = 100;
    int roll[max], i;
    char name[max][100];
    float gpa[max];

    printf("Enter the Name Roll GPA: \n");
    for(i=0;i<max;i++){
        fflush(stdin);
        printf("Name: ");
        gets(name[i]);
        printf("Roll: ");
        scanf("%d", &roll[i]);
        printf("GPA: ");
        scanf("%f", &gpa[i]);
    }
    sort123(gpa, roll, name, max);
    printf("\n\n\n");
    for(i=max-1;i>max-4;i--)
        printf("%d. %s %d %f\n", max-i, name[i], roll[i], gpa[i]);
}

void sort123(float *gpa, int *roll, char *name, int elements)
{
    int i,j;
    for(i=0;i<elements-1;i++){
        for(j=0;j<elements-1-i;j++){
            if(*(gpa+j) > *(gpa+j+1)){
                float tmp = *(gpa+j);
                int tmp_roll = *(roll+j);
                char tmp_name[100];

                *(gpa+j) = *(gpa+j+1);
                *(gpa+j+1) = tmp;

                strcpy(tmp_name, (name+(j*100)));
                strcpy((name+(j*100)), (name+((j+1)*100)));
                strcpy((name+(j+1)*100), tmp_name);

                *(roll+j) = *(roll+j+1);
                *(roll+j+1) = tmp_roll;
            }
        }
    }
}
