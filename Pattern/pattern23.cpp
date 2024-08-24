#include<iostream>
using namespace std;
int main(){
int n = 4;

int row =1;
int num= n;
while(row<=n){

//printing space 
int space = n-row;
while (space){
    // cout<<"printing sapce";
cout<<" ";
space--;
}
num--;
//printing number asending
int num=1;
while(num<=row){
    // cout<<"printing asending numneber";
cout<<num;
num++;
}
int start = row -1;
while(start){
    cout<<start;
    start--;
}
cout<<endl;
row++;
}
}