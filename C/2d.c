#include<stdio.h> 
int main()
{
  int r,c;
  printf("enter rows and column\n");
  scanf("%d%d",&r,&c);
  int arr[r][c];
  printf("enter values \n");
  for(int i=0;i<r;i++)
  {
    for(int j=0;j<c;j++)
    {
        scanf("%d",&arr[i][j]);
    }
  }  
  printf("the values are : \n");
  for(int i=0;i<r;i++)
  {
    for(int j=0;j<c;j++)
    {
        printf("%d ",arr[i][j]);
    }
    printf("\n");
  }  
 return 0;
}