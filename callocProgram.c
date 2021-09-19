#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,sum=0;
    printf("Total number of elements = ");
    scanf("%d",&n);
    printf("The elements are to be added :- ");
    int *ptr;
    if(ptr==NULL)
    {
        printf("\nMemory allocation failed");
        exit(0);
    }
    else
    {
    ptr=(int*)calloc(n,sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum+=ptr[i];
    }
    printf("The sum of all integer elements are = %d",sum);
    }
    free(ptr);
    return 0;
}