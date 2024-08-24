#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int row = 1;

    while (row <= n)
    {
        // First half
        int num = n;
        int col1 = 1;
        while (col1 <= n)
        {
            int start = 1;
            while (start <= num)
            {
                cout << start;
                start++;
            }
            num--;
            col1++;
        }

        // Print stars
        int star = 1;
        while (star < row)
        {
            cout << "*";
            star++;
        }

        // Second half
        int col2 = 1;
        while (col2 <= n)
        {
            int star = 1;
            while (star < row)
            {
                cout << "*";
                star++;
            }
            int end = 5 - row + 1;
            int numnew = row;
            while (numnew <= n)
            {
                cout << end;
                numnew++;
                end--;
            }
            col2++;
        }

        cout << endl;
        row++;
    }

    return 0;
}
