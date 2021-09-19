#include<stdio.h>
int main()
{
    int row,col;
    printf("Enter total number of rows\n");
    scanf("%d",&row);
    printf("Enter total number of cols\n");
    scanf("%d",&col);
   int array[2][3];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("\nElement at array[%d][%d] = ",i,j);
            scanf("%d",&array[i][j]);
        }
    }
    printf("The 2D array is as follows\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d\t",array[i][j]);
        }
        printf("\n");
    }
    return 0;
}