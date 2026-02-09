#include<stdio.h> 
int main()
{
    int n;
    int key;
    int odd,even=0;
    printf("enter n ");
    scanf("%d",&n);
    int arr[n];
    printf("enter array elements \n");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter key ");
    scanf("%d",&key);
    printf("the elements greater than key are : \n");
    for (int i=0;i<n;i++)
    {
        if(arr[i]>key)
        {
            printf("%d\n",arr[i]);
        }
    }










}
