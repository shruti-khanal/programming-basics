#include<iostream>
using namespace std;
class ascending
{ public:
 void ascending_order(int arr[],int n)   
 { int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1])
            {  temp=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=temp; 
            }
        }
    }
    cout<<"array in ascending order is \n";
for(int i=0;i<n;i++)
{ cout<<arr[i]<<",";
}    
}
};
int main()
{
    ascending obj;
    int n;
    cout<<"enter size of array\n";
    cin>>n;
    int arr[n];
    cout<<"enter array \n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    obj.ascending_order(arr,n);
}