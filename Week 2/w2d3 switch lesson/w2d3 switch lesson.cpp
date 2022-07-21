#include <iostream>

using namespace std;

int main()
{
    cout << "------- Welcome to my program -------" << endl;
    cout << "    What would you like to do: " << endl;
    cout << "    1) Check if a number is even." << endl;
    cout << "    2) Check if a number is positive." << endl;
    cout << "    3) Check if a number is a multiple of 7." << endl;
    cout << "Press 1, 2, or 3: ";

    int input;
    cin >> input;

    switch (input)
    {
        case 1:
        {
            cout << "Please enter a number: ";
            int number;
            cin >> number;

            if (number % 2 == 0)
            {
                cout << number << " is even!" << endl;
            }
            else
            {
                cout << number << " is odd!" << endl;
            }

            break;
        }
        case 2:
        {
            cout << "Please enter a number: ";
            int number;
            cin >> number;

            if (number > 0)
            {
                cout << number << " is positive!" << endl;
            }
            else
            {
                cout << number << " is not positive!" << endl;
            }

            break;
        }
        case 3:
        {
            cout << "Please enter a number: ";
            int number;
            cin >> number;

            bool isMultipleOF7 = number % 7 == 0;
            if (isMultipleOF7)
            {
                cout << number << " is a multiple of 7!" << endl;
            }
            else
            {
                cout << number << " is not a multiple of 7!" << endl;
            }

            break;
        }
        default:
        {
            cout << "Invalid intput. Goodbye!" << endl;
            break;
        }
    }

}


