#include<stdio.h> 
int main()
{
    int n;
    int flag=1;
    int odd,even=0;
    printf("enter n ");
    scanf("%d",&n);
    int arr[n];
    printf("enter array elements \n");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
   int i=0,j=n-1;
   while (i<=j)
   {
    if(arr[i]==arr[j])
    {
        flag=0;
        i++;
        j--;
    }
else 
{
    flag=1;
    i++;
    j--;
}
   }
if(flag==0)

    printf("palindrome");
    else 
    printf("not palindrome");
   }
    