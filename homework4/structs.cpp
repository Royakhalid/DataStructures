include <iostream>
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

    cout<<"student s1 :"<<endl;
cout<<"ID :"<<s1.ID<<endl;
cout<<"name :"<<s1.name<<endl;
cout<<"age :"<<s1.age<<endl;

    cout<<"student s2 :"<<endl;
cout<<"ID :"<<s2.ID<<endl;
cout<<"name :"<<s2.name<<endl;
cout<<"age :"<<s2.age<<endl;

    cout<<"student s3:"<<endl;
cout<<"ID :"<<s3.ID<<endl;
cout<<"name :"<<s3.name<<endl;
cout<<"age :"<<s3.age<<endl;



    return 0;
}