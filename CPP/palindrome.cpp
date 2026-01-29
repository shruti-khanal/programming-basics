#include <iostream>
using namespace std;
class palindrome
{
  public :
  int num;
  int palin(int num)
  { int temp=num,d,rev=0;
    while(temp!=0)
    {d=temp%10;
     rev=rev*10+d;
     temp=temp/10;   
    }
return rev;
}
    
};
int main()
{
    palindrome p;
   cout<<"enter number \n";
   cin>>p.num;
   int r=p.palin(p.num);
   if(r==p.num)
   cout<<"palindrome\n";
   else 
   cout<<"not palindrome\n";


}