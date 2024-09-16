#include <iostream>
using namespace std;

int pivot(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;

    while (start < end)
    {
        if (arr[0] > arr[mid])
        {
            end = mid ;
        }
        else
        {
            start = mid;
        }
        mid = (start + end) / 2;

       
    }
    return start;
}

int main()
{
    cout << "Program start:" << endl;
    int arr[6] = {2,3, 4, 5, 1, 2};
    int size = 6;
    cout << "pivot point is : " << pivot(arr, size) << endl;

    cout << "Program end:" << endl;
    return 0;
}