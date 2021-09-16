#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr1,*ptr2;
    ptr1=(int *)malloc(10*sizeof(int));
    ptr2=(int*)calloc(10,sizeof(int));
    if(ptr1==NULL||ptr2==NULL)
    {
        printf("Memory not allocated\n");
    }
    else
    {
        printf("Memory Allocated Succesfully\n");
        ptr1=realloc(ptr1,60);
        {
            printf("Memory Reallocated\n");
        }
        free(ptr2);
        {
            printf("Memory free\n");
        }
    }
    return 0;
}
