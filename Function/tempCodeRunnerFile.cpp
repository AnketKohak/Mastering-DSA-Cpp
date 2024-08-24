#include <iostream>
#include <math.h>
using namespace std;

int sqaure(int Number, int Power)
{
    int ans = 0;
    for (int i = 1; i <= Power; i++)
    {
        ans = Number * Number;
    }
    return ans;
}
int main()
{
    cout << sqaure(10, 3);
}