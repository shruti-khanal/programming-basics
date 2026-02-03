#include<iostream>
#include<string.h>
using namespace std;
int main()
{
  int ch,arr[100];
  int n,e,i=1;
  while(i!=0)
  {
  cout<<"enter 1 to insert elements \n enter 2 to display the elements \n enter 3 to search for an element \n";
  cin>>ch;
  cout<<"enter size of array \n";
  cin>>n;
  cout<<"enter array elements \n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
  switch(ch)
  {
    case 1:
      cout<<"enter element to insert \n";
      cin>>e;
      arr[n]=e;
     cout<<"the array after inserting "<<e<<"is :\n";
    for(int i=0;i<n+1;i++)
    {
       cout<<arr[i]<<endl; 
    }
    break;
case 2:
    cout<<"the array elements are \n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    break;
case 3:
    int flag;
    cout<<"enter element to search\n";
    cin>>e;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==e)
        flag=1;
    }
    if(flag==1)
    cout<<"element present \n";
    else cout<<"element not present \n";
    break;
default:
    cout<<"wrong choice \n";
}
    cout<<"do you want to continue (0/1)\n";
    cin>>i;
}
}