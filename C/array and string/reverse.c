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
    
    printf("the array elements are :\n");
    for (int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    int i=0,j=n-1;
    int temp=0;
    while(i<j)
      {temp = arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    i++;
    j--;

}
 printf("the  reversed array elements are :\n");
    for (int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }

    
}
