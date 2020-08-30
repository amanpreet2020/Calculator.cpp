#include<iostream>
using namespace std;
int main(){
int num1;
cout<<"Enter first number: ";
cin>>num1;
string op;
cout<<"Enter operator: ";
cin>>op;
int num2;
cout<<"Enter the second number: ";
cin>>num2;
if (op=="-"){
cout<<"result: "<<num1-num2<<endl;
}
else if (op=="+"){
cout<<"result: "<<num1+num2<<endl;
}
else if (op=="*"){
cout<<"result: "<<num1*num2<<endl;
}
else if (op=="/"){
cout<<"result: "<<num1/num2<<endl;
}
else{
    cout<<"invalid operator";
}

return 0;
}
