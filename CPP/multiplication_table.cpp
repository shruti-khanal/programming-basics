#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a number to print its multiplication table \n";
    cin>>n;
    cout<<"the table of "<<n<<"is : ";
    for(int i=1;i<=10;i++)
    {
        cout<<n<<" * "<<i<<" = "<<i*n<<"\n";


    }
}