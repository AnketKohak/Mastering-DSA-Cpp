#include <iostream>
using namespace std;

int main()
{
    cout << "Program start:" << endl;
    int n = 5;
    int count = 0;
    for (int row = 1; row <= n; row++)
    {
        for (int space = n - row; space >= 1; space--)
        {
            cout << "  ";
        }
        for (int left = 1; left <= row; left++)
        {
            count++;
            cout <<count<<" ";
           
        }
        for (int right = 1; right < row; right++)
        {
            --count;
            cout << count<<" ";
        }
        cout << endl;
    }

    cout << "Program end:" << endl;
    return 0;
}
//         1 
//       2 3 2 
//     3 4 5 4 3 
//   4 5 6 7 6 5 4 
// 5 6 7 8 9 8 7 6 5 