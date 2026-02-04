#include<iostream>
using namespace std;
int sum1d(int arr[],int n)
{ int sum=0;
    for(int i=0;i<n;i++)
    {
       sum=sum+arr[i];
    } 
    return sum;  
}
int sum2d(int arr[100][100],int r,int c)
{ int sum=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            sum=sum+arr[i][j];
        }
    }
    return sum;
}

int main()
{  int arr[100]; 
   int n,r,c;
  cout<<"enter the size of  1D array\n";
  cin>>n;
  cout<<"enter elements of 1 d array\n ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
  cout<<"the sum of 1d array elements is : "<<sum1d(arr,n)<<endl;

 int arr2[100][100];

 cout<<"enter rows and columns of 2D array \n";
 cin>>r>>c;
 cout<<"enter the elements of 2d array \n";

 for(int i=0;i<r;i++)
 {
    for(int j=0;j<c;j++)
    {
        cin>>arr2[i][j];
    }
 }

cout<<"the sum of 2d array elements is : "<<sum2d(arr2,r,c)<<endl;
return 0;
}