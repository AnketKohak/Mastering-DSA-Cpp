#include<iostream>
using namespace std;

int main (){

    int num =65;
    for(int i =0;i<30;i++){
        int powerof2 = pow(2,i);

        if(powerof2==num){
            cout<<"this is power of 2 number";
            return 1;
        }

    }
    cout<<"this not powerof 2";

    return 0;
    
}