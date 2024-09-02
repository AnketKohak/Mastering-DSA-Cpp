#include <iostream>
using namespace std;

int main()
{
    cout << "Program start:" << endl;
    int n = 5;
    int count = 1;
    for (int row = 1; row <= n; row++)
    {
        for (int space = n - row; n >= 1; n--)
        {
            cout << " ";
        }
        for (int left = 1; left <= row; left++)
        {
            cout << count << " ";
            count++;
        }
       
    }

    cout << "Program end:" << endl;
    return 0;
}