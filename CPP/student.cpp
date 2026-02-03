#include<iostream>
#include<string.h>
using namespace std;
class student
{private:
    string name;
    int section;
    int roll_no;
    string course;
public:
void setDetails(string n,int r, int s,string c)
{
   name=n;
   roll_no=r;
   section=s;
   course=c;

}
void Display()
{  cout<<"the details of student are as follows : \n";
    cout<<"name =  \t"<<name<<endl;
    cout<<"roll no = \t"<<roll_no<<endl;
    cout<<"section = \t"<<section<<endl;
    cout<<"course = \t"<<course<<endl;
}
};
int main()
{
 student obj;
 int roll,sec;
 string name,course;
 cout<<"enter name of student \n";
 cin>>name;
 cout<<"enter roll no \n";
 cin>>roll;
 cout<<"enter section \n";
 cin>>sec;
 cout<<"enter course \n";
 cin>>course;
 obj.setDetails(name,roll,sec,course);
 obj.Display();
}