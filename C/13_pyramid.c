#include<stdio.h> 
int main()
{
    int i ,j,n,k;
    n=5;
    for(i=1;i<=n;i++)
    { for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
      for (k=1;k<=i*2-1;k++)
         {
            printf("*");
         }
         printf("\n");

        }
    }