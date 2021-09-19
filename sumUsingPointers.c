#include<stdio.h>
int main()
{
    int a,b,sum=0;
    int *p1,*p2,*s;
    printf("Enter value of a & b \n");
    printf("a = ");
    scanf("%d",&a);
    printf("b = ");
    scanf("%d",&b);
    p1=&a;
    p2=&b;
    s=&sum;
    *s=*p1+*p2;
    printf("Sum = a+b = %d",sum);
    return 0;
}