#include<iostream>
using namespace std;
class prime
{public : 
 int num;
int pri(int num)
{int flag=0;
    if(num==0||num==1)
    flag=1;
    if(num==2)
    flag=0;
    else 
    {
        for(int i =2;i<num/2;i++)
        {
            if(num%i==0)
            {
                flag=1;
                break;
            }
        }
    }
    return flag;
}

};
int main()
{
    prime obj;
    cout<<"enter a number \n";
    cin>>obj.num;
    int k=obj.pri(obj.num);
    if(k==0)
    cout<<"prime \n";
    else 
    cout<<"not prime \n";
}