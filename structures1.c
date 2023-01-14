// to show the working of structure
// with . operator we can access the elements of the structure
#include<stdio.h>
struct book
{
    char name[30],author[30];
    int pages;
    float price;
}b;
//struct book b;// 38 bytes will be allocated
int main()
{
    printf("Enter the name,author,pages and price of the book\n");
    scanf("%s%s%d%f",b.name,b.author,&b.pages,&b.price);
    printf("Details of the book is\n");
    printf("%s %s %d %f",b.name,b.author,b.pages,b.price);
}

