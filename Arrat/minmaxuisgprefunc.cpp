#include<iostream>
using namespace std;

int main(){
    cout << "Program start:" << endl;

    int arr[10] = {12, 11, 31, 41, 315, 113161, 7311211, 318, 129, 3210};
    int n = 10;
   
    int mini = INT_MAX;
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        mini = min(mini, arr[i]);
        maxi = max(maxi, arr[i]);
    }
    cout << "miniumm from array : " << mini << endl;
    cout << "maximum from array : " << maxi << endl;

    cout << "Program end:" << endl;
    return 0;
}