//in this question we have to found key fromo rotatedarray

#include <iostream>
using namespace std;

int pivot(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
    }
    return start;
}

int binarysearch(int arr[], int size, int key)
{
    int pivotnum = pivot(arr, size);

    int start, end;
    if (key >= arr[0])
    {
        start = 0;
        end = pivotnum - 1;
    }
    else
    {
        start = pivotnum;
        end = size - 1;
    }

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return -1;
}

int main()
{
    cout << "Program start:" << endl;

    int arr[6] = {3, 4, 5, 0, 1, 2};
    int size = 6;
    int key = 1;

    cout << "At position: " << binarysearch(arr, size, key) << endl;

    cout << "Program end:" << endl;
    return 0;
}



// Program start:
// At position: 4
// Program end: