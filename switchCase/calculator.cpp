#include<iostream>
using namespace std;

int main(){

    int num1;
    cout<<"enter the first number : ";
    cin>>num1;

    int num2;
    cout<<"enter the second number : ";
    cin>>num2;

    char op;
    cout<<"enter the operation : ";
cin>>op;

switch (op)
{
case '+': cout<<(num1+num2);
        break;
case '-': cout<<(num1-num2);
        break;
case '*': cout<<(num1*num2);
        break;
case '/': cout<<(num1/num2);
        break;
default: cout<<"wrong operation enter";
    break;
}

}