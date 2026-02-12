#include<iostream>
using namespace std;
int main()
{
  int*ptr=new int;
  cout<<"enter a value \n";
  cin>>*ptr;
  cout<<"the value is :"<<*ptr<<endl;
  cout<<"the address of "<<*ptr<<"is : "<<ptr<<endl;   
  delete ptr;
  ptr=NULL;
}