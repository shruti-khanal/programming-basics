#include<iostream>
using namespace std;
int main()
{
   int n;
   cout<<"enter length of array \n";
   cin>>n;
   int arr[n];
   cout<<"enter array elements \n";
   for(int i=0;i<n;i++)
   {
    cin>>arr[i];
   }
   for(int i=0;i<n;i++)
   {
    for(int j=0;j<n-i;j++)
    {
         if(arr[j]>arr[j+1])
         { int temp = arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;

         }
    }
   }
   cout<<"sorted array is \n";
   for(int i=0;i<n;i++)
    {
       cout<<arr[i]<<",";
    }
    //duplicate logic
    int k=1;
    for(int i=1;i<n;i++)
    { if(arr[i]!=arr[k-1])
        {
            arr[k]=arr[i];
            k++;
        }

    }
    cout<<"\narray after removing duplicate elements is\n";
    for(int i=0;i<k;i++)
    {
       cout<<arr[i]<<",";
    }
}
    
