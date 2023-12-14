//Number guessing game
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int x,n;
    srand(time(NULL));
    x = (rand() % 10) + 1;

    printf("Guess a number from 1 to 10: ");
    scanf("%d",&n);

    if(n==x)
    {
        printf("You guessed the right number");
    }
    else
    {
        printf("Wrong guess");
    }
}