#include <iostream>
using namespace std;

int main()
{
    cout << "Program start:" << endl;

    int rownum = 4;
    for (int row = 1; row <= rownum; row++)
    {
        for (int left = 1; left <= row; left++)
        {
            cout << left;
        }
        for (int space = row; space < rownum; space++)
        {
            cout << "  ";
        }
        for (int right = row; right >= 1; right--)
        {
            cout << right;
        }
        cout << endl;
    }

    cout << "Program end:" << endl;
    return 0;
}

// 1      1
// 12    21
// 123  321
// 12344321