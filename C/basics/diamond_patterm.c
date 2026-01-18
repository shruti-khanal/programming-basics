#include<stdio.h> 
int main()
{
    int i ,j,n,k;
    printf("enter n ");
    scanf("%d",&n);
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
 for(int i=n;i>=1;i--)  //10
      {
        for (int j=1;j<=n-i;j++)//1 j<=0  1<=0 false skip iteration 2 2<=
        { 
            printf(" ");

        }

        for(int k=(i*2-1);k>=1; k--)
        {
            printf("*");
        }
        printf("\n");
      }
 return 0;
}