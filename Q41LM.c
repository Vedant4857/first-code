#include<stdio.h>
void swap(int*a,int*b)
{
   int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
  int a,b;
  a = 10; b = 20;
  swap(&a,&b);
  printf("a = %d, b = %d",a,b);

}


