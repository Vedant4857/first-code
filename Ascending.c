#include<stdio.h>
int main()
{
    int a[3][3],n,i,j,pos = 0, neg = 0,zero = 0;
    printf("Enter the elements in an array: ");
    for( i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

   
    for ( i=0;i<3;i++)
    {
       for( j=0;j<3;j++)
       {
       if (a[i][j]>0)
       {
        pos++;
       }
       if (a[i][j]<0)
       {
        neg++;
       }
       if (a[i][j]==0)
       {
        zero++;
       }
       }
    
   }  
   printf("Positive = %d",pos);
   printf("\nNegative = %d",neg);
   printf("\nZero = %d",zero);
return 0;
}