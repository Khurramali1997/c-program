#include<stdio.h>
int fibonacci(int num);
int main()
{
    int num,value=0;
    printf("Enter a number to print fibonacci series\n");
    scanf("%d",&num);
    value=fibonacci(num);
    printf("The fibonacci series is : -\n");
    printf("%d",value);


return 0;
}

int fibonacci(int num)
{
    if(num==0)
    {
        return 0;
    }
     else if (num==1)
    {
        return 1;
    }
     else
     {
      return  fibonacci(num-1)+fibonacci(num-2);
     }
}