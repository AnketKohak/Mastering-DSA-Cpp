#include <iostream>
using namespace std;

int main()
{
    int num = 10;
    cout << "Program start:" << endl;

    for (int i = 1; i <= 4; i++)
    {
        for (int j = i; j <= 4; j++)
        {
            if (i % 2 == 0)
            {
                cout << num++;
            }
            else
            {
                cout << num--;
            }
        }
        cout << endl;
    }

    cout << "Program end:" << endl;
    return 0;
}

// 10987
// 456
// 32
// 1