#include<iostream>
using namespace std;

void alterNum(int arr[],int size){
    for(int i =0;i<size;i=i+2){
        int dummy=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=dummy;
    }
}

int main(){
    cout << "Program start:" << endl;

int arr[10]={1,2,3,4,5,6,7,8,9,0};
alterNum(arr, 10);
for (int i = 0; i < 10; i++)
{
    cout << arr[i] << " ";
}

    cout << "Program end:" << endl;
    return 0;
}