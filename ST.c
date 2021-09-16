#include <stdio.h>
#include <stdlib.h>

struct student {
    char firstName[50];
    int roll;
    float marks;
} s[10];

int main() {
    int i;
    printf("Enter information of students:\n");
    for (i = 0; i < 5; ++i) {
        s[i].roll = i + 1;
        printf("\nFor roll number%d,\n", s[i].roll);
        printf("Enter first name: ");
        scanf("%s", s[i].firstName);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }
    printf("Displaying Information:\n\n");
    for(i=0; i<5; i++)
{
for(j=i+1; j<5; j++)
{
if(s[i].roll_no<s[j].roll_no)
{
temp = s[i].roll_no;
s[i].roll_no=s[j].roll_no;
s[j].roll_no=temp;
}
}
}
    }
    return 0;
}
