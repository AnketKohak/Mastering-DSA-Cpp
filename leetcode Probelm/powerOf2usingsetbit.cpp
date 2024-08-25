#include <iostream>
using namespace std;

int main()
{
    cout << "Program start:" << endl;

    int n = 2;
    int ans = 0;
    int i = 0;
    while (n)
    {
        int bit = n & 1;
        ans = pow(10, i) * bit + ans;
        n = n >> 1;
        i++;
    }
    cout << ans << endl;
    while (ans>2)
    {
        int bit = ans % 10;
        if (bit == 1)
        {
            cout << "not" << endl;
            return 0;
        }
        else
        {
            ans = ans / 10;
        }
    }
    cout << "right" << endl;
    cout << "Program end:" << endl;
    return 0;
}