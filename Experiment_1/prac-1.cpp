#include<iostream>

using namespace std;

struct Student{
    string name;
    int rollNo,age;
    float marks;
};
int main() {
    Student student;

    cout<<"Enter the student's name:"<<endl;
    getline(cin,student.name);
    
    cout<<"Enter roll no :";
    cin>>student.rollNo;

    cout<<"Enter student's age:";
    cin>>student.age;

    cout<<"Enter student's marks:";
    cin>>student.marks;

    cout<<"Enter student's info"<<endl;
    cout<<"----------------------"<<endl;
    cout << "Name: " << student.name << endl;
    cout << "Roll No: " << student.rollNo << endl;
    cout << "Age: " << student.age << endl;
    cout << "Marks: " << student.marks << endl;

    return 0;

}