#include<stdio.h> 
int main()
{
    int n;
    printf("enter n ");
    scanf("%d",&n);
    int arr[n];
    printf("enter array elements \n");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int min=arr[0];
    printf("the array elements are :\n");
    for (int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
for(int i=0;i<n;i++)
{  
    if (arr[i]<min)
    {
        min=arr[i];
    }
}
printf("the smallest element in the array is %d",min);
 return 0;
}
