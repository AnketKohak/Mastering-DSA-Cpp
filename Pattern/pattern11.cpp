#include<iostream>
using namespace std;

int main(){
    cout<<"enter the number : ";
    int n;
    cin>>n;
    int row = 1;
    while(row<=n){
        int col =1;
        while (col<=row)
        {
           cout<<row-col+1;
           col = col +1;
        }
        cout<<endl;
        row = row + 1;
        
    }
}

// 1
// 21
// 321
// 4321
// 54321