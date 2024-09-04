#include<iostream>
using namespace std;

int main(){
    // cout<<"enter the number : ";
    int n=4;
    // cin>>n;
    int row = 1;
    int num=n;
    while (row<=n)
    {
       
     int col=1;

        num=n-row+1;
        while (col<=num)
        {
          cout<<"*";
          col++;
        }
        cout<<endl;
        row++;
    }
}
// ****
// ***
// **
// *