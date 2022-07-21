
#include <iostream>

using namespace std;

int NumberCubed(int base, int exponent);

int main()
{
    int base;
    int exponent = 3;

    cout << "Enter a number you would like to be cubed: " << endl;
    cin >> base;
    cout << base << " cubed is " << NumberCubed(base, exponent);
}

int NumberCubed(int base, int exponent)
{
    if (exponent == 0)
    {
        return 1;
    }
    else
    {
        return base * NumberCubed(base, exponent - 1);
    }
}
