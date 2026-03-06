#include<iostream>
using namespace std;
class temperature
{public:
    double convert(double cel)
    { double f=0.0;
        f=((9*cel)/5)+32;
        return f;
    }
    int convert(int fah)
    {
        int c=0;
        c=((fah-32)/9)*5;
        return c;
    }
};
int main()
{   int f;
    double c;
    cout<<"enter the temperatures in celsius and fahrenheit \n";
    cin>>c>>f;
    temperature obj;
    cout<<"the temp "<<f<<" in celsius is :  "<<obj.convert(f)<<endl;
    cout<<"the temp "<< c <<" in fahrenheit is :  "<<obj.convert(c)<<endl;

}
