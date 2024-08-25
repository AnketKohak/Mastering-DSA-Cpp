#include <iostream>
using namespace std;

int main()
{
    cout << "Program start:" << endl;

    bool a[9] = {true,false};
   
    // cout << a[1]<<endl;

    for (int i = 0; i <= 11; i++)
    {
        cout << a[i] << endl;
    }

    cout << "Program end:" << endl;
    return 0;
}