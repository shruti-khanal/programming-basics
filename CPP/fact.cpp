#include <iostream>
#include <string.h>
using namespace std;
class factorial
{public:
   int  fact=1;
   int num;
   
int f(int num)
{for(int i=1;i<=num;i++)
  {fact=fact*i;
}
return fact;
}
};
int main()
{ factorial obj;
  cout<<"enter a number \n";
  cin>>obj.num;
  int k =obj.f(obj.num);
  cout<<"factorial is "<<k;



}