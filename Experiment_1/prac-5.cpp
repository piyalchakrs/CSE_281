#include<iostream>

using namespace std;

struct ComplexNumbers{
    float real,img;
};

ComplexNumbers SubtractComplexNumbers(const ComplexNumbers &n1, const ComplexNumbers &n2 ){
    ComplexNumbers result;
    result.real = n1.real - n2.real;
    result.img = n1.img - n2.img;
    return result;
}
void DisplayResult(const ComplexNumbers &n){
    cout<<n.real<<"+"<<n.img<<"i"<<endl;
}
int main(){
    ComplexNumbers n1,n2,diff;

    cout<<"Enter the 1st complex number(real & img):";
    cin>>n1.real>>n1.img;

    cout<<"Enter the 2nd complex number(real & img):";
    cin>>n2.real>>n2.img;

    diff = SubtractComplexNumbers(n1,n2);

    cout<<"The difference of the complex numbers is :";
    DisplayResult(diff);

    return 0;
}