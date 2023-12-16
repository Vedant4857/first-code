// Develop a program to access members of a union using union variable.
#include <stdio.h>

union car
{

    char company[50];
    char model[20];
    int price;
};

int main()
{
    union car c1;

    printf("Enter the car company:");
    gets(c1.company);
    printf("Car company= %s", c1.company);

    printf("\nEnter the car model:");
    gets(c1.model);
    printf("Car model= %s", c1.model);

    printf("\nEnter the car price:");
    scanf("%d", &c1.price);
    printf("Car price= %d", c1.price);
    
    return 0;
}
