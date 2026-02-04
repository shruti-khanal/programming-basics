#include<iostream>
using namespace std;
int main()
{ int n;
    cout<<"enter a number to print its multiplication table\n";
    cin>>n;
    cout<<"skips the iteration for 2 when encounters continue \n";
    cout<<"breaks the loop when 8 is encountered \n"; 
    for(int i=1;i<=10;i++)
      { if(i==2)
       { 
        continue;
       }
        if(i==8)  
         break;
          cout<<n<<" * "<<i<<" = "<<i*n<<endl;
    }

   return 0; 
}