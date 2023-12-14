#include<stdio.h>
int main()
{
    int a[50],n,sum=0;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the elements in an array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum = sum + a[i];
    }
    int avg = sum/n;
    int max = a[0]-1;
    int min = a[0]+1;
    for(int i=0;i<n;i++)
    {
       if(a[i]>max)
       {
        max = a[i];
       }
       if(a[i]<min)
       {
        min = a[i];
       }
    }
    printf("Max = %d\n",max);
    printf("Min = %d\n",min);
    printf("Sum = %d\n",sum);
    printf("Avg = %d\n ",avg);
    return 0;
}



