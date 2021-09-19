#include<stdio.h>
struct books
{
    char title[50],author[50];
    int price;
};
int main()
{
    struct books book[2]={
        [0]={.title="Harry Potter",.author="J.K Rollings",.price=100},
        [1]={.title="Name Of The Wind",.author="Patrick Roufus",.price=300}
    };
    printf("Books that I like are : -\n\n");
    for(int i=0;i<2;i++)
    {
        printf(" Title  : %s\n Author : %s\n Price  : %d rs\n\n",book[i].title,book[i].author,book[i].price);
    }
}