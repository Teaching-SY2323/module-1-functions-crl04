#include <iostream>

using namespace std;

int Add2Values(int, int);

int main()
{
    int x, y;
    cout
         << "-- Add 2 Values --\n";
    cout << "Enter x Values: ";
    cin >> x;
    cout << "Enter y Value: ";
    cin >> y;

    cout << " Are equal to: ";

    cout << Add2Values(x, y);

    return 0;
}

int Add2Values(int x, int y)
{
 return x + y;
}


