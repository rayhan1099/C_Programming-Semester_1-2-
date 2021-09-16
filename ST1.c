#include <stdio.h>
#include <stdlib.h>
void clrstdin();
struct Marks{
 float C,Math;
 };
 struct student{
 char Name[100],Address[100];
 struct Marks Marks;
 };
 typedef struct student student;
 int main()
 {
     student students[100];
     int j,k=0;
     float p=0;
     for(j=1;j<=10;j++){
            printf("Input %d student data: \n",j);
          printf("Name: ");
          gets(students[j].Name);
          printf("Adress: ");
          gets(students[j].Address);
          printf("C: ");
          scanf("%f",&students[j].Marks.C);
          clrstdin();
          printf("Math: ");
          scanf("%f",&students[j].Marks.Math);
        clrstdin();
     }
     p=students[0].Marks.C+students[0].Marks.Math;
     for(j=1;j<10;j++)
     {
         if(students[j].Marks.C+students[j].Marks.Math>p){
            p=students[j].Marks.C+students[j].Marks.Math;
            k=j;
         }
     }
     printf("Highest %s",students[k].Name);
    return 0;
 }
 void clrstdin()
 {
     while ((getchar())!='\n');
     }
