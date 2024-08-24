#include <iostream>
using namespace std;

int main()
{

    cout << "enter the ammount : ";
    int money;
    cin >> money;

    int note500 = 0;
    int note100 = 0;
    int note50 = 0;
    int note10 = 0;
    int note1 = 0;

    switch (1)
    {
    case 1:
        note500 = money / 500;
        money = money % 500;
    case 2:
        note100 = money / 100;
        money = money % 100;
    case 3:
        note50 = money / 50;
        money = money % 50;
    case 4:
        note10 = money / 10;
        money = money % 10;
    case 5:
        note1 = money / 1;
        money = money % 1;
    default:
        cout << "wrong operation enter";
        break;
    }

    cout << "number of note 500 :" << note500 << endl;
    cout << "number of note 100 :" << note100 << endl;
    cout << "number of note 50 :" << note50 << endl;
    cout << "number of note 10 :" << note10 << endl;
    cout << "number of note 1 :" << note1 << endl;
}