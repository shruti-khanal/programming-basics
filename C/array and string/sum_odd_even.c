#include<stdio.h> 
int main()
{
    int n;
    int odd =0,even=0,sum=0;
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
    {
        if(i%2==0)
        {
            even=even+arr[i];
        }
        else
        {
            odd=odd+arr[i];
        }
    }
sum=even-odd;
printf("the sum of even indices = %d\n",even);
printf("the sum of odd indices = %d\n",odd);
printf("the difference of even and odd indices sum = %d",sum);
}
