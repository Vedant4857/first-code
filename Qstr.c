#include<stdio.h>
#define SIZE 20
struct book_detail {
    
    char book_title[50];
    char author_name[50];
    char publication[50];
    int price;
};

void output(struct book_detail z[],int n) {

    int i;
    for(i = 0;i<n;i++) {

        printf("\n\n\tBook %d details",i+1);

        printf("\nBook title:%s",z[i].book_title);
        printf("\nAuthor name:%s",z[i].author_name);
        printf("\nPublication:%s",z[i].publication);
        printf("\nPrice: %d",z[i].price);
    }
}

int main() {
    struct book_detail b[SIZE];
    int i ,num;
    printf("Enter the number of books:");
    scanf("%d",&num);

    for(i = 0;i<num;i++){

        printf("\tENTER BOOK NO.%d DETAILS",i+1);

        printf("\nEnter the book title:");
        scanf("%s",b[i].book_title);

        printf("Enter the auhtor name:");
        scanf("%s",b[i].author_name);

        printf("Enter the publication:");
        scanf("%s",b[i].publication);

        printf("Enter the price:");
        scanf("%d",&b[i].price);
    }
     output(b,num);
}