#include<stdio.h>
float perimeter(float l,float b);
int main()
{
    float length,breadth;
    printf("Enter the length and breadth of the rectangle\n");
    scanf("%f%f",&length,&breadth);
    float pmtr=perimeter(length,breadth);
    printf("The perimeter of the rectangle is = %f",pmtr);
    return 0;
}
float perimeter(float l,float b)
{
    float p=2*(l+b);
    return p;
}