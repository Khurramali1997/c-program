#include<stdio.h>
int main()
{
    int i=10;
    switch (i)
    {
    case 10:
        printf("Hello");
    case 20:
        printf("World");
    case 30:
        continue;
    
    default:
        printf("Exit");
    }
return 0;
}