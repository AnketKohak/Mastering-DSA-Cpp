#include <iostream>
using namespace std;

int main()
{
    cout << "Program start:" << endl;
    int n = 3;
    int repo = 0;
    for (int row = 0; row <n*2; row++)
    {
        for (int col = 0; col <n*2; col++)
        {
            if (row == repo || col == repo || row == (n * 2)-1 || col == (n * 2) - 1)
            {
                cout<<n-repo;
            }
            else if(row==3 && col==3){
                cout<<"1";
            }
            else{
                cout<<"2";
            }
        }
        cout<<endl;
    }

    cout << "Program end:" << endl;
    return 0;
}