#include<stdio.h> 
int main()
{
    int n;
    int key;
    int count=0;
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
    for (int i=0;i<=n;i++)
    {
                
        for(int j=i+1;j<=n;j++)
        {
            for(int k=j+1;k<=n;k++)
            if((arr[i]+arr[j]+arr[k])==key)
            {count++;
             printf(">%d,%d,%d\n",arr[i],arr[j],arr[k]);
                
             }
    
            }
        }
printf("total triplets = %d",count);

}