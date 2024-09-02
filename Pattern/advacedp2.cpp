#include<iostream>
using namespace std;

int main(){
    cout << "Program start:" << endl;
    int n =5;
   for(int row = 1; row <=n;row++){
   char a='A';
    for(int left=1;left<=row;left++){

        cout<<a++;
    }
    a--;
    for (int right = 1; right < row; right++)
    {
        cout << --a;
       
    }

    cout<<endl;
   }

    cout << "Program end:" << endl;
    return 0;
}