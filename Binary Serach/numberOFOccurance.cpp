#include <iostream>
using namespace std;

int first(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int first = -1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (key == arr[mid])
        {
            first = mid;
            end = mid - 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        mid = (start + end) / 2;
    }
    return first;
}

int last(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int first = -1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (key == arr[mid])
        {
            first = mid;
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        mid = (start + end) / 2;
    }
    return first;
}

int main()
{
    cout << "Program start:" << endl;

    int arr[10] = {0, 0, 1, 1, 4, 6, 7, 8, 9, 10};
    int size = 10;
    int key = 1;
    int firstTime = first(arr,size,key);
    int lastTime = last(arr, size, key);

    cout << "first : " << firstTime << endl;
    cout << "last : " << lastTime << endl;

    cout<<"number of occuarnce : "<<lastTime-firstTime+1<<endl;

    cout << "Program end:" << endl;
    return 0;
}