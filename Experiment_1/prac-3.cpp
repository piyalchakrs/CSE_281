#include<iostream>

using namespace std;

struct Marks{
    string name;
    int rollNo;
    float chem_marks, maths_marks, phy_marks;
};

int main(){
    Marks marks[5];

    for(int i=0;i<5;i++){
        cout<<"Enter the marks of student"<<i+1<<":"<<endl;
        cout<<"name:";
        getline(cin,marks[i].name);
        cout<<"roll no :";
        cin>>marks[i].rollNo;
        cout<<"marks of chemistry:";
        cin>>marks[i].chem_marks;
        cout<<"marks of mathematics:";
        cin>>marks[i].maths_marks;
        cout<<"marks of physics:";
        cin>>marks[i].phy_marks;
        cout<<"-----------------\n";
        cin.ignore();
    }

    for(int i=0;i<5;i++){
        float total_marks = marks[i].chem_marks + marks[i].maths_marks + marks[i].phy_marks;
        float percentage = (total_marks/300.00)*100.00;
        cout<<"student name : "<<marks[i].name<<" roll: "<<marks[i].rollNo<<endl;
        cout<<"percentage: "<<percentage<<"%"<<endl;   
    }

return 0;
}