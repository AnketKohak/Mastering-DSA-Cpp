#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number : ";
    cin>>n;
    int sum=0;
    int i=0;
    while(i<=n){
        if(i%2 == 0){
     sum = sum + i;
        }
     i++;
    }
    cout<<"the sum even of n number is "<<sum;
}