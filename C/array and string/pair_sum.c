#include<stdio.h> 
int main()
{
    int n;
    int key;
    printf("enter n ");
    scanf("%d",&n);
    int arr[n];
    printf("enter array elements \n");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter key \n");
    scanf("%d",&key);
    printf("the array elements are :\n");
    for (int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    printf("the numbers whose sum is %d = \n",key);
    for (int i=0;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(arr[i]+arr[j]==key)
            {
                printf("%d,%d\n",arr[i],arr[j]);
                
             }
    
            }
        }


}