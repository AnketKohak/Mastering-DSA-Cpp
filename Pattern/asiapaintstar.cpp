#include <iostream>
using namespace std;

int main()
{
    cout << "Program start:" << endl;

    int n = 4;
    for (int i = 0; i < n; i++)

 {
        for (int i1 = n-i; i1 >= 1; i1--)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    

    cout << "Program end:" << endl;
    return 0;
}
//     * 
//    * * 
//   * * * 
//  * * * * 