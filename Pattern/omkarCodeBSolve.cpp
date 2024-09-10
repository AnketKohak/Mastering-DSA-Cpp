#include <iostream>
using namespace std;

int main()
{
    int hight = 10;
    int assending, decending;

    for (int h = hight; h > 0; h--)
    {
        if (h % 2 != 0)
        {
            assending = 0;
            for (int j = 1; j <= h - 1; j++)
            {
                assending += j;
            }
            assending++;

            for (int i = 1; i <= h; i++)
            {
                for (int j = h; j >= i; j--)
                {
                    cout << assending;
                    assending++;
                }
                cout << endl;
                break;
            }
        }
        else
        {
            decending = 0;
            for (int k = 1; k <= h; k++)
            {
                decending += k;
            }

            for (int i = 1; i <= h; i++)
            {
                for (int j = h; j >= i; j--)
                {
                    cout << decending;
                    decending--;
                }
                cout << endl;
                break;
            }
        }
    }
    return 0;
}
