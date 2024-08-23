
#include<iostream>
using namespace std;

int main(){
    cout<<"enter the number :";
    int N;
    cin>>N;
    int i=2; 
       while(i<=N){
           if(N%i==0){
               cout<<0;
           }
           i=i+1;
       }
       cout<<1;
}

   