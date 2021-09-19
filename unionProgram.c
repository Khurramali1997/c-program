#include<stdio.h>
union books{
    char title[100];
    char author[50];
    int price;
};
int main()
{
    union books book[3]={[0]={.author="J K Rolling"},
    [1]={.title="Lethal White"},
    [2]={.price=100}};

printf("Books that I like are : -\n\n");
printf(" Title  : %s\n Author : %s\n Price  : %d rs\n\n",book[1].title,book[0].author,book[2].price);

}