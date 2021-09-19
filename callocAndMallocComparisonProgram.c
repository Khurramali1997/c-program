#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    int *ptrMalloc,*ptrCalloc;
    printf("Enter the number of values = ");
    scanf("%d",&n);
    ptrMalloc=(int*)malloc(n*sizeof(int));
    ptrCalloc=(int*)calloc(n,sizeof(int));
    if(ptrMalloc==NULL && ptrCalloc==NULL)
    {
        printf("Memory allocation failed");
        exit(0);
    }
    else
    {
        printf("The initial values in Malloc are\n");
        for(int i=0;i<n;i++)
        {
            printf("%d\t",ptrMalloc[i]);
        }
        printf("The initial values in Calloc are\n");
        for(int i=0;i<n;i++)
        {
            printf("%d\t",ptrCalloc[i]);
        }
    }
    free(ptrMalloc);
    free(ptrCalloc);
    return 0;
}