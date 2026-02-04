#include<iostream>
using namespace std;
inline  int square(int a)
{
    return a*a;
}
int main()
{
    int n;
    cout<<"enter a number to find its square \n";
    cin>>n;
    cout<<"the square of "<<n<<" is "<<square(n);
}