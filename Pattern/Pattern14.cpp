#include<iostream>
using namespace std;

int main(){
    cout<<"enter the number : ";
    int n;
    cin>>n;
    int i=1;
    char character=65;
    while(i<=n){
        int j = 1;
     while(j<=n){
            cout<<character;
            j = j + 1;
     character = character +1;
     }
     character = character -2;
     cout<<endl;
     i = i + 1;
    }
}