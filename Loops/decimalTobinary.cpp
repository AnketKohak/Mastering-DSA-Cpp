#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n =10;
    int ans =0;
    int i=0;
    while (n)
    {
     int bit =n&1;
     ans=pow(10,i)*bit+ans;
     n=n>>1;
     i++;
    }
    cout<<ans;
}