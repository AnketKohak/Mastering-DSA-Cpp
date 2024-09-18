#include <iostream>
using namespace std;

int peak(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;

    while (start < end)
    {
        if (arr[mid] < arr[mid + 1])
        {
            start = mid+1;

        }
        else
        {
            end = mid;
        }
        mid = (start+end)/2;
    }
    return arr[start];
}

int main()
{
    cout << "Program start:" << endl;
    int arr[9] = {0,1, 2,3,4,3,2, 1,0};
    int size = 9;
    cout << "peak element : " <<peak(arr, size) << endl;

    cout << "Program end:" << endl;
    return 0;
}

// Program start:
// peak element : 4
// Program end: