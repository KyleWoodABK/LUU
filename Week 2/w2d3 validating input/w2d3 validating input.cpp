#include <iostream>

using namespace std;

int main()
{
    int number;
    bool validInput = false;
    

    do
    {
        cout << "Enter a number: ";
        cin >> number;

        if (cin.fail())
        {
            validInput = false;
            cin.clear();
            cin.ignore(99, '\n');
            cout << "That is not a number!" << endl;
        }
        else
        {
            validInput = true;
        }
    } while (!validInput);
    
    // alt - cleaner
    int number;
    
    do
    {
        cout << "Enter a number: ";
        cin >> number;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(99, '\n');
            cout << "That is not a number!" << endl;
        }
        else
        {
            break;
        }
    } while (true);


}


