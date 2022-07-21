#include <iostream>

using namespace std;

void Factors(int number);

int main()
{
    int number;

    do
    {
        cout << "Please enter a positive number: ";
        cin >> number;
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(100, '\n');
            system("cls");
            cout << "Invalid entry! Try again!" << endl;
        }
        if (number <= 0)
        {
            cin.clear();
            cin.ignore(100, '\n');
            system("cls");
            cout << "Invalid entry! Try again!" << endl;
        }
        else
        {
            break;
        }
    } while (true);
    
    Factors(number);

}

void Factors(int number)
{
    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            cout << i << " ";
        }
    }
}