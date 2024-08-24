#include<iostream>
using namespace std;

int main(){

int a=0;
int b=1;
int sum =0;
cout<<a<<endl;
cout<<b<<endl;
for(int i=0;i<10;i++){
    sum =a +b;
    a=b;
    b=sum;
    cout<<sum<<endl;

}

}