#include <iostream>
using namespace std;

constexpr int g_kMenuPlay=1;
constexpr int g_kMenuQuit=2;

void PointerValues(int number1, int number2);
int DisplayMenu();
void DisplayMessage(string message);

int main()
{
    bool keepPlaying = true;

    do
    {
        int input = DisplayMenu();

        switch (input)
        {
        case g_kMenuPlay:
        {
            system("cls");

            int a, b;
            DisplayMessage("Please enter 2 numbers: ");
            cin >> a >> b;
            PointerValues(a, b);
            break;
        }
        case g_kMenuQuit:
        {
            DisplayMessage("Goodbye!");
            keepPlaying = false;
            break;
        }
        default:
        {
            system("cls");
            DisplayMessage("Invalid input. Goodbye!");
            break;
        }
        }
    } while (keepPlaying);

}

void PointerValues(int number1, int number2)
{
    int a = number1;
    int b = number2;
    int* ptrA = &a;
    int* ptrB = &b;

    cout << "The numbers you entered are " << *ptrA << " and " << *ptrB << endl;
    cout << endl;
}

int DisplayMenu()
{
    int input;

    do
    {
        cout << "Welcome to the Pointer challenge!" << endl;
        cout << "This will take 2 inputs and display them by pointer reference! Enter a selection: " << endl;
        cout << "  1) Play Now" << endl;
        cout << "  2) Quit" << endl;
        cout << "  Press 1 or 2: ";

        cin >> input;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(100, '\n');
            system("cls");
            cout << "Invalid entry! Please try again." << endl;
        }
        else
        {
            break;
        }
    } while (true);

    return input;
}

void DisplayMessage(string message)
{
    cout << message << endl;
}
