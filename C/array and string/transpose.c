#include<stdio.h> 
int main()
{
  int r,c;
  printf("enter rows and column\n");
  scanf("%d%d",&r,&c);
  int arr[r][c];
  int t[r][c];
  printf("enter values \n");
  for(int i=0;i<r;i++)
  {
    for(int j=0;j<c;j++)
    {
        scanf("%d",&arr[i][j]);
    }
}
printf("original matrix: \n");
for(int i=0;i<r;i++)
  {
    for(int j=0;j<c;j++)
    {
        printf("%d ",arr[i][j]);
    }
    printf("\n");

}
printf("transpose is \n");
for(int i=0;i<r;i++)
  {
    for(int j=0;j<c;j++)
    {
        t[j][i]=arr[i][j];
    }
}
for(int i=0;i<c;i++)
  {
    for(int j=0;j<r;j++)
    {
        printf("%d ",t[i][j]);
    }
    printf("\n");
  }
}
