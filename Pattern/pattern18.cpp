#include<iostream>
using namespace std;

int main(){
    // cout<<"enter the number : ";
    int n=4;
    // cin>>n;
    int row = 1;
    
    while (row<=n)
    {
        int space = n -1;
        int col = 1;
        //this is for space printing 
        while (row<=space)
        {
         cout<<" ";
         space=space-1;
        }
        //this for star printing
        while (col<=row)
        {
          cout<<"*";
          col=col+1;
        }
        cout<<endl;
        row++;
    }
}