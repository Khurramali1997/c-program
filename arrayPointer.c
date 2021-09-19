#include<stdio.h>
float largestElement(float array[],int size,float *largest);
int main()
{
    int n;
    printf("Enter the length of array = ");
    scanf("%d",&n);
    float array[n];
    printf("Enter the elements of the array \n");
    for(int i =0;i<n;i++)
    {
        scanf("%f",&array[i]);
    }
    int size=n;
    float largest=array[0];
    largestElement(array,size,&largest);
    printf("The largest number in array = %.3f\n",largest);
    return 0;
}
float largestElement(float array[],int size,float *largest)
{
    for(int i=2;i<size;i++)
    {
        if(array[i]>*largest)
        *largest=array[i];
    }
}