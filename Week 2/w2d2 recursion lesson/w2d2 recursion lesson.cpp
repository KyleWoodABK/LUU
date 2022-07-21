#include <iostream>

using namespace std;

// function declarations
int Function1(int n);
int Function2(int n);

int sum(int n);

int Power(int base, int exponent);

int main()
{
    // function calls
    cout << sum(5) << endl;

    cout << Power(3, 0) << endl;
    cout << Power(3, 1) << endl;
    cout << Power(3, 2) << endl;
    cout << Power(3, 3) << endl;
    cout << Power(3, 4) << endl;
    cout << Power(3, 5) << endl;
    cout << Power(3, 6) << endl;
    cout << Power(3, 7) << endl;
    cout << Power(3, 8) << endl;
}

// function definitions 
int Function1(int n)
{
    if (n <= 1)
        return 1;
    else
        return Function2(n);
}

int Function2(int n)
{
    return Function1(n - 1);
}

int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n + sum(n - 1);
    }
}

int Power(int base, int exponent)
{
    if (exponent == 0)
    {
        return 1;
    }
    else
    {
        return base * Power(base, exponent - 1);
    }
}
