#include<iostream>

using namespace std;

struct Student{
    string name;
    int rollNo,age;
};

int main(){
    Student students[5];

    for(int i=0;i<5;i++){
        cout<<"Enter the student's info:"<<i+1<<endl;
        students[i].rollNo= i+1;
        cout<<"Name:";
        getline(cin,students[i].name);
        cout<<"Age :";
        cin>>students[i].age;
        cin.ignore();
    }
    int Targetrollno2 = 2;
    for(int i=0;i<5;i++){
        if(Targetrollno2==students[i].rollNo){
            cout<<"Details of roll no 2:"<<endl;
            cout<<"---------------------"<<endl;
            cout<<"Name:"<<students[i].name<<endl;
            cout<<"Age:"<<students[i].age<<endl;

            break;
        }
    }

return 0;
}