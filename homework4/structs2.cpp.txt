#include <iostream>
using namespace std;
struct student{
int ID;
string name;
int age;

};

int main(){
    
  student s1={1001,"jhon doe",20};
    student s2={1002,"jane smith",21};
  student s3={1003,"Bob johnson",19};

student*p1=&s1;
student*p2=&s2;
student*p3=&s3;


    cout<<"student s1 :"<<endl;
cout<<"ID :"<<p1->ID<<endl;
cout<<"name :"<<p1->name<<endl;
cout<<"age :"<<p1->age<<endl;

    cout<<"student s2 :"<<endl;
cout<<"ID :"<<p2->ID<<endl;
cout<<"name :"<<p2->name<<endl;
cout<<"age :"<<p2->age<<endl;

    cout<<"student s3:"<<endl;
cout<<"ID :"<<p3->ID<<endl;
cout<<"name :"<<p3->name<<endl;
cout<<"age :"<<p3->age<<endl;



    return 0;
}