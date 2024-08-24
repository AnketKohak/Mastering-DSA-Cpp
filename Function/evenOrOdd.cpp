#include <iostream>
using namespace std;

void evenOrOdd(int num)
{
    if (num & 1)
    {
        cout << "odd";
    }
    else
    {
        cout << "even";
    }
}
int main()
{
    evenOrOdd(1);

    return 0;
}