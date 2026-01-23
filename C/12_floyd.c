#include<stdio.h> 
int main()
{
    int x=1,n,i,j;
    printf("enter number of rows\n ");
    scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
        for(j=1;j<=i;j++)
        {
            printf("%d ",x);
            x++;
        }
        printf("\n");
     }
 return 0;
}