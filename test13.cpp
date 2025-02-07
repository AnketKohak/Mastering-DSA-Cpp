#include <iostream>
#include <math.h>
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

    bool foundOne = false;
    while (ans)
    {
        int bit = ans % 10; // Get the last digit (bit)
        if (bit == 1)
        {
            if (foundOne) // If we already found a '1', it's not a power of 2
            {
                cout << "not" << endl;
                return 0;
            }
            foundOne = true; // Mark that we've found the first '1'
        }
        ans = ans / 10; // Remove the last digit
    }

    cout << "right" << endl;
    cout << "Program end:" << endl;
    return 0;
}
