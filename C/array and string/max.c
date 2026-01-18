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
    int max=arr[0];
    printf("the array elements are :\n");
    for (int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
for(int i=0;i<n;i++)
{  
    if (arr[i]>max)
    {
        max=arr[i];
    }
}
printf("\n the largest element in the array is %d",max);
 return 0;
}