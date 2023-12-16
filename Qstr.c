/*Develop a program to create structure of book with book title , author name ,
price and number of pages . Read the information of n books and display the details of book with highest price .*/
#include <stdio.h>
#include <string.h>
#define SIZE 20

struct book
{
    char book_title[50];
    char author_name[50];
    int price;
    int pages;
};

void output(struct book v[], int num)
{

    int i;
    for (i = 0; i < num; i++)
    {

        printf("\n\n\tBook number:%d", i + 1);

        printf("\nBook %d title = %s ", i + 1, v[i].book_title);
        printf("\nBook %d author name = %s ", i + 1, v[i].author_name);
        printf("\nBook %d price = %d ", i + 1, v[i].price);
        printf("\nBook %d pages = %d ", i + 1, v[i].pages);
    }
}

int main()
{
    struct book b[SIZE];
    int n, i;
    printf("Enter the number of books:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {

        printf("\t=:Book %d Detail:=\n", i + 1);

        printf("Enter the book title: ");
        scanf("%s", b[i].book_title);

        printf("Enter the author name: ");
        scanf("%s", b[i].author_name);

        printf("Enter the book price: ");
        scanf("%d", &b[i].price);

        printf("Enter the no. of pages ");
        scanf("%d", &b[i].pages);
    }
    output(b, n);
}
