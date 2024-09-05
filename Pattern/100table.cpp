#include<iostream>
using namespace std;
int main(){
    cout << "Program start:" << endl;

    for(int i=1;i<=10;i++){
        for(int j=1;j<=100;j++){
            cout<<i*j<<" ";
        }
        cout<<endl;
    }

    cout << "Program end:" << endl;
    return 0;
}