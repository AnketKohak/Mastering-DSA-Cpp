#include <iostream>
using namespace std;

int main()
{
    cout << "Program start:" << endl;
    cout << "Enter the string: ";

    string str;
    cin >> str;

    // Bubble sort to sort the string characters
    for (int i = 0; i <=str.length(); i++)
    {
        for (int j = 0; j < str.length()-1; j++)
        {
            if (str[j] > str[j + 1])
            {
                // Swap characters
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }

    cout << "Sorted string: " << str << endl;
    cout << "Program end:" << endl;
    return 0;
}
