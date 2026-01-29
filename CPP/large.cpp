#include<iostream>
using namespace std;
class large
{public:
    int n1,n2,n3;
   int islarge(int n1,int n2,int n3)
   {if(n1>n2)
    {
        if(n1>n3)
        return n1;
        else 
        return n3;
    }
else if(n2>n1)
    {   if(n2>n3)
        return n2;
        else 
        return n3;
    }
} 
};
int main()
{    
    large obj;
    cout<<"enter three numbers one  by one \n";
    cin>>obj.n1>>obj.n2>>obj.n3;
    int k=obj.islarge(obj.n1,obj.n2,obj.n3);
    cout<<"the largest number is "<<k;
}