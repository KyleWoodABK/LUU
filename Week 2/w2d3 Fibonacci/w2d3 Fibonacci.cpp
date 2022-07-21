#include <iostream>

using namespace std;

// function declarations
int FibonacciRecursive(int n);

int FibonacciLoop(int n);

int main()
{
    cout << FibonacciRecursive(34) << endl;

    cout << FibonacciLoop(34) << endl;
}

// function definitions
int FibonacciRecursive(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return FibonacciRecursive(n - 1) + FibonacciRecursive(n - 2);
    }
}

int FibonacciLoop(int n)
{
    if ((n == 1) || (n == 2))
    {
        return 1;
    }
    else
    {
        int prev = 1, current = 1, next = 0;
        for (int i = 3; i <= n; i++)
        {
            next = prev + current;
            prev = current;
            current = next;
        }
        return next;
    }
}
