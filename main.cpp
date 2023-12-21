#include <iostream>
using namespace std;

float Add2Values(float, float);

int main()
{
    float x, y;
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

float Add2Values(float x, float y)
{
 return x + y;
}

