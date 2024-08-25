#include<iostream>
using namespace std;

int value(int n){
   return ++n;
}
 
int main(){
 int n = 10;
 cout<<"this is value function : "<<value(n)<<endl;;

 cout<<"this n for m main function :"<<n<<endl;;
 
return 0;
}