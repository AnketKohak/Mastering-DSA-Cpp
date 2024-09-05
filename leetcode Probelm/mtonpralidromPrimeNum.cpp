#include <iostream>
using namespace std;

bool prime(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int palidrome(int num)
{
    int pali = 0;
    while (num > 0)
    {
        int digit = num % 10;
        pali = (10 * pali) + digit;
        num = num / 10;
    }
    return pali;
}

int main()
{
    cout << "Program start:" << endl;
    cout << "enter the number : ";
    int num;
    cin >> num;

    if (prime(num))
    {
        cout << "this is plaidraome number : " << palidrome(num) << endl;
    }
    else
    {
        cout << "this is not plaidrome number : " << num << endl;
    }

    cout << "Program end:" << endl;
    return 0;
}