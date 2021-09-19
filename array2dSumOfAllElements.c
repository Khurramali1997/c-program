#include<stdio.h>
int main()
{
    int row,col,sum=0;
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
            sum = sum+array[i][j];
        }
        printf("\n");
    }
    printf("\nThe sum of all elements 2D array is as follows = %d",sum);
    return 0;
}