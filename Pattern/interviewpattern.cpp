#include <iostream>
using namespace std;

void printPattern(int n)
{
    int size = 2 * n - 1;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            // Calculate the minimum distance to the edges
            int top = i;
            int bottom = size - 1 - i;
            int left = j;
            int right = size - 1 - j;

            // Find the smallest distance
            int minDist = top;
            if (bottom < minDist)
                minDist = bottom;
            if (left < minDist)
                minDist = left;
            if (right < minDist)
                minDist = right;

            // Determine the value to print
            int num = n - minDist;
            cout << num;
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    printPattern(n);
    return 0;
}
