#include <iostream>
using namespace std;

int main()
{
    cout << "Program start:" << endl;
    int n = 3;
    int repo = 1;
    for (int row = 1; row <n*2; row++)
    {
        for (int col = 1; col <n*2; col++)
        {
            if(row==repo || col==repo || row==5 || col==5){
                cout<<"3 ";
            }
            else if(row==3 && col==3){
                cout<<"1 ";
            }
            else{
                cout<<"2 ";
            }
        }
        cout<<endl;
    }

    cout << "Program end:" << endl;
    return 0;
}