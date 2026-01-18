#include<stdio.h> 
int main()
{
    int n;
    int temp=0;
    printf("enter n ");
    scanf("%d",&n);
    int arr[n];
    printf("enter array elements \n");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("the array elements are :\n");
    for (int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
        for (int i=0;i<n;i++)
      {      for(int j=i+1;j<=n;j++)
              {if (arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
      }
       printf("the sorted array elements  are :\n");
    for (int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    printf("the second largest element is %d\n",arr[n-2]);
}
