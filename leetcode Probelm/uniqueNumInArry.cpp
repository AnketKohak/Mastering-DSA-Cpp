#include <iostream>
using namespace std;

int numFinder(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
       ans = ans ^ arr[i];
    }
    return ans;
}



int main()
{
    cout << "Program start:" << endl;

    int arr[9] = {1, 4, 2, 2, 3, 3, 4, 5, 5};
    int a = numFinder(arr, 9);
    cout << a << endl; 

    cout << "Program end:" << endl;
    return 0;
}
