#include<iostream>
using namespace std;

int binarysearch(int arr[],int key){
    int start=0;
    int end=5;
    int mid=(start+end)/2;
   while(start<=end){
        if(key==arr[mid]){
            return mid;
        }
        else if(arr[mid]<key){
            start=arr[mid]+1;
            mid=(start+end)/2;
        }
        else{
            end = arr[mid] - 1;
            mid = (start + end) / 2;
        }
    }

return -1;
}

int main(){
    cout << "Program start:" << endl;
int arr[6]={0,1,2,3,4,10};
int key=12;

cout<<"key is 3 at position : "<<binarysearch(arr,key);
  

    cout << "Program end:" << endl;
    return 0;
}