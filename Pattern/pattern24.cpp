#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    for (int row = 1; row <= n; row++)
    {
        // First half - print numbers
        for (int num = 1; num <= n - row + 1; num++)
        {
            cout << num;
        }

        // Print stars
        for (int star = 1; star < row; star++)
        {
            cout << "*";
        }

        // Print stars (second half)
        for (int star = 1; star < row; star++)
        {
            cout << "*";
        }

        // Second half - print numbers
        for (int num = n - row + 1; num >= 1; num--)
        {
            cout << num;
        }

        cout << endl;
    }

    return 0;
}
