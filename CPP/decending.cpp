#include<iostream>
using namespace std;
class decending
{ public:
 void decending_order(int arr[],int n)   
 { int temp=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[j]>arr[j+1])
            {  temp=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=temp; 
            }
        }
    }
    cout<<"array in decending order is \n";
for(int i=n-1;i>=0;i--)
{ cout<<arr[i]<<",";
}    
}
};
int main()
{
    decending obj;
    int n;
    cout<<"enter size of array\n";
    cin>>n;
    int arr[n];
    cout<<"enter array \n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    obj.decending_order(arr,n);
}