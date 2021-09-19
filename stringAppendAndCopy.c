#include<stdio.h>
#include<string.h>
int main()
{
    char string1[100],string2[100],string_1[100];

    printf("Enter first string :\t");
    scanf("%[^\n]%*c",string1);
    printf("Enter second string :\t");
    scanf("%[^\n]%*c",string2);
    strcpy(string_1,string1);
    strcat(string1," ");
    strcat(string1, string2);
    printf("Appended string is :\t");
    printf("%s",string1);
    printf("\nOrignal first string is :\t");
    printf("%s",string_1);
    return 0;
}