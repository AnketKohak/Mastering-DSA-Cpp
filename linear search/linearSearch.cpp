#include <iostream>
using namespace std;

bool numFinder(int arr[], int size, int key)
{
    cout << "key : " << key << endl;
    for (int i = 0; i < size; i++)
    {
        if (key == arr[i])
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    cout << "Program start:" << endl;

    int arr[10] = {190, 7, 12, 63, 162, 122, 152, 2121, 211, 12312};
    int key = 07;
    bool found = numFinder(arr, 10, key);
    if (found)
    {
        cout << "number find" << endl;
    }
    else
    {
        cout << "number not found" << endl;
    }
    cout << "Program end:" << endl;
    return 0;
}