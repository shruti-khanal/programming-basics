#include<iostream>
#include<string.h>
using namespace std;
class person
{  public:
    string name;
    int age;
};
class student : public person
{ int roll_no;
  public:  
  void setDetails(string n,int a, int roll)
  { name=n;
    age=a;
    roll_no=roll;
  }  
 void print()
 {
    cout<<"the details of student are \n";
    cout<<"name = "<<name<<endl;
    cout<<"age = "<<age<<endl;
    cout<<"roll no  = "<<roll_no<<endl;
 } 
};
int main()
{
    student obj;
    string name;
    int r,age;
    cout<<"enter name \n";
    cin>>name;
    cout<<"enter age \n";
    cin>>age;
    cout<<"enter roll no\n";
    cin>>r;
    obj.setDetails(name,age,r);
    obj.print();
}
