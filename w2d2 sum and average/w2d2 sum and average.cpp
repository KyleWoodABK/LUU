

#include <iostream>

using namespace std;

int main()
{
    // Prompt user to enter 3 numbers
    cout << "Please enter 3 numbers!" << endl;

    // Get 3 numbers
    int a, b, c;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Enter third number: ";
    cin >> c;

    // Add 3 numbers
    int sum = a + b + c;

    // Find average of 3 numbers
    float average = (a + b + c) / 3.0f;

    // Provide sum and average to user
    cout << "The sum of your 3 numbers is " << sum << " and the average of your 3 numbers is " << average << endl;
}


