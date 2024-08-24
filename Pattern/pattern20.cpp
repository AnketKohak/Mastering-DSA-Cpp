#include<iostream>
using namespace std;

int main(){
    // cout<<"enter the number : ";
    int n=4;
    // cin>>n;
   int row = 1;
   int num =n;
   while(row <= n){
    int space=1;
    while(space<row){
        cout<<" ";
        space++;
    }
    int star = 1;
    while(star<=num){
        cout<<row;
        star++;
    }
    num--;
    cout<<endl;
    row++;



   }
}