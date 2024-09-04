#include<iostream>
using namespace std;

int main(){
    cout<<"enter the number : ";
    int n;
    cin>>n;
    int row=1;
    int count = 1;
    while(row<=n){
        int col = 0;
     while(col<=row-1){
            cout<<row+col<<" ";
           col = col + 1;
           count = count + 1 ;
         
     }
     cout<<endl;
     row = row +1 ;

    }
}

// 1 
// 2 3 
// 3 4 5 
// 4 5 6 7 
// 5 6 7 8 9 