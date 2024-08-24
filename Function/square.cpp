#include <iostream>
#include <math.h>
using namespace std;

int sqaure(int Number, int Power)
{
    int ans = 1;
    for (int i = 1; i < =Power; i++)
    {
        ans = ans * Number;
    }
    return ans;
}
int main()
{
    cout << sqaure(10, 3)<<endl;
    cout << sqaure(20, 3)<<endl;
}