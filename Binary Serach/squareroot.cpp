
// this is sqaure root finder using binary search 
#include <iostream>
using namespace std;

int squareRoot(int find)
{
    int start = 0;
    int end = find;
    int mid = (start + end) / 2;
    while (start <= end)
    {
       
        int square = mid * mid;
        if (square == find)
        {
            return mid;
        }
        else if (find < square)
        {
            end = mid - 1;
        }
        else if (square < find)
        {
            start = mid+1;
        }
        mid = (start + end) / 2;
    }
    return mid;
}

int main()
{
    cout << "Program start:" << endl;
    int num;
    cout << "enter the number : ";
    cin >> num;
    cout << "square root is : " << squareRoot(num)<<endl;
    cout << "Program end:" << endl;
    return 0;
}


// Program start:
// enter the number : 100
// square root is : 10
// Program end: