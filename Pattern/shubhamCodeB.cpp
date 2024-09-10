#include <iostream>
using namespace std;

int main()
{
    int a = 15;
    int temp = a;

    for (int i = 0; i < 5; i++)
    {
        int elements = 4 - i;

        if (i % 2 == 0)
        {
            for (int k = 0; k < elements; k++)
            {
                cout << temp;
                temp--;
            }
        }
        else
        {
            int start = temp - elements + 1;
            for (int k = 0; k < elements; k++)
            {
                cout << start;
                start++;
            }
            temp = temp - elements;
        }
        cout << endl;
    }

    return 0;
}
