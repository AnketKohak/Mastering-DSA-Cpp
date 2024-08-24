#include<iostream>
using namespace std;

int main(){
    int num =12345132 ;
    int reverseint=0;
    while(num){
        int digit=num%10;
        if((reverseint<INT_MIN/10) || (reverseint>INT_MAX/10)){
        
            return 0;
        }


        reverseint = (reverseint * 10) + digit;
        num=num/10;
    }
cout<<reverseint;
}