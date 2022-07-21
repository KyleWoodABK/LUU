#include <iostream>

using namespace std;

int main()
{
    int year;
    cout << "Please enter a year to check if it is a leap year: ";
    cin >> year;

    bool isLeapYear = (!(year % 4) && (year % 100) || !(year % 400));
    if (isLeapYear == true)
    {
        cout << year << " is a leap year!" << endl;
    }
    else
    {
        cout << year << " is not a leap year!" << endl;
    }

}


