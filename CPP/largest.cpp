#include<iostream>
using namespace std;
class large
{ public:
 int n;
 int largest =0;   
 int largest_num(int arr[],int n)
 { for(int i=0;i<n;i++)
    {
        if (arr[i]>largest)
        {
            largest = arr[i];
        }
    }
    return largest;
 }
};
int main()
{
    large obj;
    cout<<"enter the size of array"<<endl;
    cin>>obj.n;
    int arr[obj.n];
    cout<<"enter array elements "<<endl;
    for(int i=0;i<obj.n;i++)
    {
        cin>>arr[i];
    }
    cout<<"the largest element is :"<<obj.largest_num(arr,obj.n);

}