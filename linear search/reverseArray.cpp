#include <iostream>
using namespace std;
void reverseArray(int arr[], int size)
{
    int end = size - 1;
    for (int start = 0; start < size; start=start+2)
    {
        int dummy = arr[start];
        arr[start] = arr[end];
        arr[end] = dummy;
        end=end-2;
    }
}

int main()
{
    cout << "Program start:" << endl;

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    reverseArray(arr, 10);
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "Program end:" << endl;

    return 0;
}