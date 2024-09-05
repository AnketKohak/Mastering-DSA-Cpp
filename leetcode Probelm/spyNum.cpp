#include <iostream>
using namespace std;

void spyNumcheck(int num)
{
    int sum = 0;
    int product = 1;

    while (num > 0)
    {
        int digit = num % 10;
        sum = sum + digit;
        product = product * digit;
        num = num / 10;
    }
    if (sum == product)
    {
        cout << "this is spy number " << endl;
    }
    else
    {
        cout << "this is not spy num" << endl;
    }
}

int main()
{
    cout << "Program start:" << endl;
    cout << "enter the number  : ";
    int num;
    cin >> num;
    spyNumcheck(num);

    cout << "Program end:" << endl;
    return 0;
}