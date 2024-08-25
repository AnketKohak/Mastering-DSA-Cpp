#include<iostream>
using namespace std;

void minMax(int arr[],int size){
    int min = INT_MAX;
    int max = INT_MIN;

    for(int i = 0; i<size;i++){
        if(min>arr[i]){
            min = arr[i];
        }
        if(max<arr[i]){
            max= arr[i];
        }
    }
    cout<<"minium form array is : "<<min<<endl;
    cout<<"maximum form array is : "<<max<<endl;
}

int main(){
    cout << "Program start:" << endl;

    int arr[10]={12,11,31,41,315,113161,7311211,318,129,3210};
    minMax(arr,10); 
    cout << "Program end:" << endl;
    return 0;
}