#include<stdio.h> 
int main()
{
    int n;
    int odd,even=0;
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
    printf("the modified elements are : ");
    for (int i=0;i<n;i++)
    {
        if(i%2!=0)
        {
           odd=arr[i]*2;
           printf("%d - %d\n",arr[i],odd);
        }
        else{
            even=arr[i]+10;
            printf("%d - %d\n",arr[i],even);
        }
    }
}