#include <iostream>

using namespace std;

int main()
{
    cout << "Please enter an integer: ";
    int number;
    cin >> number;

    bool isPositive = (number > 0);
    bool isNegative = (number < 0);
    bool isZero = !isNegative && !isPositive;
    // bool isZero = (isNegative == false) && (isPositive == false); // alt
    bool isNonZero = !isZero;

    bool isEven = (number % 2) == 0;
    bool isOdd = !isEven;

    if (isPositive)
    {
        if (isEven)
        {
            cout << number << " is positive and even" << endl;
        }
    }

    if (isPositive && isEven)
    {
        cout << number << " is positive and even" << endl;
    }
    
    if (isNegative && isOdd)
    {
        cout << number << " is negative and odd" << endl;
    }
}


