#include<stdio.h> 
int main()
{
    int n;
    int key;
    int frequency=0;
    printf("how many terms you want to enter");
    scanf("%d",&n);
    int arr[n];
    printf("enter the terms \n");
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
    for(int i = 0;i<n;i++)
    {
        if(arr[i]==key)
        {
            frequency++;
        }

    }
    printf("the frequency of %d is %d\n",key,frequency);
}
