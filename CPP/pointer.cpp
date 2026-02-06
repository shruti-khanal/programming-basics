#include<iostream>
using namespace std;
int main()
{ int n;
  cout<<"enter a number \n";
  cin>>n;
  int *ptr=&n;
  cout<<"the value of n is : "<<n<<endl;
  cout<<"the address of "<<n<< "is : " <<ptr<<endl;
  cout<<"the value of n using derefrencing is "<<*ptr<<endl;
  cout<<"the address of ptr is "<<&ptr<<endl;  
    return 0;
}