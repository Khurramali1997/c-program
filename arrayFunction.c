#include<stdio.h>
int sum_array(int array[],int length);
int main()
{
        int n;
        printf("Enter the length of array = ");
        scanf("%d",&n);
        int array[n];
        int sum;
        printf("Enter the elements of the array \n");
        for(int i =0;i<n;i++)
        {
            scanf("%d",&array[i]);
        }
        sum=sum_array(array,n);
        printf("The sum of all the elements in the given array = %d",sum);
        return 0;
}


int sum_array(int array[],int length)
{
    int sum=0;
    for(int i=0;i<length;i++)
    {
        sum=sum+array[i];
    }
    
    return sum;
}