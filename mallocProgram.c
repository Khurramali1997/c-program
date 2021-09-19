#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,n,sum=0;
    printf("Enter numbers of natural number = ");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory allocation failed");
        exit(0);
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            scanf("%d",&ptr[i]);
        }
        
    }

    for(int i=0;i<n;i++)
        {
        sum+=ptr[i];
        }
    free(ptr);
    printf("Sum of the integers in array is = %d",sum);

return 0;
}