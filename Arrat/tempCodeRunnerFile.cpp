#include <iostream>
using namespace std;

int main()
{
    cout << "Program start:" << endl;

    int a[10] = {0};
    a[1] = {12};
    cout << a[1];
    // for (int i = 0; i <= 11; i++)
    // {
    //     cout << a[i] << endl;
    // }

    cout << "Program end:" << endl;
    return 0;
}