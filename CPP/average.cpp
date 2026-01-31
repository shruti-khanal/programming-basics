#include<iostream>
using namespace std;
class average
{ public:
    double avg_elements(int arr[],int n)
    {   double avg =0.0;
        int sum=0;
        for(int i=0;i<n;i++)
        {
          sum=sum+arr[i];
          avg=sum/n;
        }
    return avg;    
    }
};
int main()
{
     average obj;
    int n;
    cout<<"enter size of array\n";
    cin>>n;
    int arr[n];
    cout<<"enter array elements"<<endl;
    for(int i=0;i<n;i++)
    {
       cin>>arr[i]; 
    }
    cout<<"the average of all elements of the array is : "<<obj.avg_elements(arr,n);
}