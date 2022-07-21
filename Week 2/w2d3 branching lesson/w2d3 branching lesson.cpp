#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << "Please enter a number: ";
    cin >> number;

    if (number > 0)
    {
        cout << "The number you entered is positive" << endl;
    }
    else if (number < 0)
    {
        cout << "The number you entered is negative" << endl;
    }
    else
    {
        cout << "The number you entered is zero" << endl;
    }

    bool isEven = (number % 2) == 0;
    if (isEven == true)
    {
        cout << "The number is even" << endl;
    }

    if (isEven == false)
    {
        cout << "The number is odd" << endl;
    }

    int number2;
    cout<<"Please enter a number"<<endl;
    cin >> number2;

    if (number2 == 0)
    {
        cout << "The number is zero" << endl;
    }
    else
    {
        cout << "The number is non-zero" << endl;;
    }

    bool isEven2 = (number2 % 2) == 0;
    if (isEven2 == true)
    {
        cout << "The number is even" << endl;
    }
    else
    {
        cout << "The number is odd" << endl;
    }

    int grade;
    cout << "Enter a numerical grade: ";
    cin >> grade;

    if (grade > 90)
    {
        cout << "A+" << endl;
    }
    else if (grade > 80)
    {
        cout << "A" << endl;
    }
    else if (grade > 70)
    {
        cout << "B" << endl;
    }
    else if (grade > 60)
    {
        cout << "C" << endl;
    }
    else if (grade > 50)
    {
        cout << "D" << endl;
    }
    else
    {
        cout << "F" << endl;
    }

}

/*
// relational operators
    int a = 10;
    int b = 20;

    bool result;

    result = (a == b); // false
    result = (a != b); // true

    result = (a < 10); // false
    result = (a <= 10); // true

    result = (10 > b); // false
    result = (10 >= b); // false

    bool isEven = ((a % 2) == 0); // true
    bool isOdd = ((a % 2) != 0); // false
    bool isOdd = ((a % 2) == 1); // false
    bool isPositive = (b > 0); // true

*/
