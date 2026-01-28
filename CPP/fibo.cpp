#include<iostream>
using namespace std;
class fibo
{public:
    int num;
void fib(int num)
{
int a=0,b=1,c=0;
cout<<a<<" ,";
cout<<b<<", ";
for(int i=1;i<=num;i++)
 { 
  c=a+b;
  a=b;
  b=c;
  cout<<c<<" ,";
}

}};
int main()
{ fibo f;
 cout<<"enter number ";
 cin>>f.num;
 f.fib(f.num);
}