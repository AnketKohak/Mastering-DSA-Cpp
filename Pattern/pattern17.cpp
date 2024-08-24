#include<iostream>
using namespace std;

int main(){
    // cout<<"enter the number : ";
    int n=4;
    // cin>>n;
         char c=68;
    int row=1;
    while(row <=n){
        int col = 1;
        while(col <= row){
         cout<<c;
         col++; 
         c=c+1; 
        }
        c=c-row-1;
        cout<<endl;
        row++;
      
    }   
}