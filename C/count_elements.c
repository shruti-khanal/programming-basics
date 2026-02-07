#include<stdio.h> 
int main()
{
    int n=0;
    int neg=0,pos=0,e=0,o=0;
    printf("enter n ");
    scanf("%d",&n);
    int arr[n];
    int even[n];
    int odd[n];
    int posi[n];
    int nega[n];
    int ze;
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
    for (int j=0;j<n;j++)
     { if(arr[j]%2==0)
        {
            e++;
            even[j]=arr[j];
        }
         if(arr[j]%2!=0)
              {
                o++;
                odd[j]=arr[j];
              }
        if(arr[j]>0)
        {
            pos++;
            posi[j]=arr[j];
        } 
         if(arr[j]<0)
        {
            neg++;
            nega[j]=arr[j];

        }
        if(arr[j]==0)
        {
            ze++;
        }

           }
    
    printf("the no of positive elements are %d\n",pos);
        printf("the no of negative elements are %d\n",neg);

            printf("the no of even elements are %d\n",e);
            printf("the no of odd elements are %d\n",o);
        




    
        }
