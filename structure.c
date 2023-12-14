#include<stdio.h>
int main()
{
    struct book
    {
        char name; float price;int pages;
    };
    struct book b1,b2;
    printf("Enter names, price and pages of first book ");
    scanf(" %c%f%d",&b1.name,&b1.price,&b1.pages);

    printf("Enter names, price and pages of second book ");
    scanf(" %c%f%d",&b2.name,&b2.price,&b2.pages);

    printf("And this is what you entered\n");
    printf("%c %.2f %d\n",b1.name,b1.price,b1.pages);
    printf("%c %.2f %d",b2.name,b2.price,b2.pages);
    return 0;

}