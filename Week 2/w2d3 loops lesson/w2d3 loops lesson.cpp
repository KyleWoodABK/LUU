#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a number between 10 and 20: ";
    int number;
    cin >> number;

    bool isValid = (number >= 10) && (number <= 20);
    while (!isValid)
    {
        cout << "That number is not between 10 and 20." << endl;
        cout << "Enter an integer between 10 and 20: ";
        cin >> number;
        isValid = (number >= 10) && (number <= 20);
    }

    cout << "Thanks for entering " << number << ", that number is between 10 and 20!" << endl;


    cout << "Enter rows: ";
    int rows;
    cin >> rows;
    
    cout << "Enter columns: ";
    int columns;
    cin >> columns;

    int currentColumn = 0;
    while (currentColumn < columns)
    {
        int currentRow = 0;
        while (currentRow < rows)
        {
            cout << "#";
            currentRow++; // same as currentRow = currentRow + 1;
        }
        cout << endl;
        currentColumn++;
    }


    bool isValid2 = false;
    int number2;
    do
    {
        cout << "Enter an integer between 10 and 20: ";
        cin >> number2;
        isValid2 = (number2 >= 10) && (number2 <= 20);
        if (!isValid2)
        {
            cout << "That number is not between 10 and 20." << endl;
        }
    } while (!isValid2);

    cout << "Thanks for entering " << number2 << ", that number is between 10 and 20!" << endl;

    cout << "Enter a number: ";
    int number3;
    cin >> number3;

    for (int i = 0; i <= number3; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
    // alt
    for (int i = 0; i <= number3; i+=2)
    {
        cout << i << " ";
    }
    cout << endl;
    // odd
    for (int i = 1; i <= number3; i+=2)
    {
        cout << i << " ";
    }
    cout << endl;

    for (int i = number3; i >= 0; i--)
    {
        cout << i << " ";
    }
    cout << endl;
}

/*
loops

break 
    terminates loop immediately
    when nested, only breaks loop its within

continue

while (condition)
{
    // statements
}


do
{
    // statements
} while(condition;


for (intialization; condition; incrementation)
{
    // statements
}
*/
