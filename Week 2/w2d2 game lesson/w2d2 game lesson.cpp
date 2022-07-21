#include <iostream>
#include <time.h>

using namespace std;

// constant values for gender menu
constexpr int g_kMaleGender = 1;
constexpr int g_kFemaleGender = 2;
constexpr int g_kOtherGender = 3;

// constant values for main menu
constexpr int g_kPlayMenu = 1;
constexpr int g_kQuitMenu = 2;

constexpr int g_kMaxGuesses = 5;

int DisplayWelcomeMessage();
void DisplayMessage(string message);
void PlayGame();
string GetUserName();
int AskForGender();
int AskForAge();
string GenerateNickname(int gender, int age);
int GetGuess(int turn, string nickname);
bool ReviewGuess(int guess, int randomNumber);
void DisplayGameOver(int randomNumber, string nickname);

int main()
{
    // seed the random number generator
    srand((unsigned)time(0));

    bool keepPlaying = true;

    do
    {
        // Display welcome message
        int input = DisplayWelcomeMessage();



        switch (input)
        {
        case g_kPlayMenu:
        {
            PlayGame();
            break;
        }
        case g_kQuitMenu:
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

int DisplayWelcomeMessage()
{

    int input;

    do
    {
        // Display welcome message
        cout << "-------  Welcome to the Amazing number guessing game.  ------- " << endl;
        cout << "    You have "<<g_kMaxGuesses<<" guesses to correctly guess the correct number between 1 and 20: " << endl;
        cout << "    1) Play Now." << endl;
        cout << "    2) Quit." << endl;
        cout << " Press 1 or 2: ";

        // Get initial input
        
        cin >> input;

        if (cin.fail())
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
    
    return input;
}

void DisplayMessage(string message)
{
    cout << message << endl;
}

void PlayGame()
{
    system("cls");
    string name = GetUserName();
    system("cls");

    cout << "Welcome " << name << endl << endl;

    bool isGameOver = false;

    do
    {
        int gender = AskForGender();

        // Check for valid gender
        if (gender >= g_kMaleGender && gender <= g_kOtherGender)
        {
            system("cls");
            int age = AskForAge();
            system("cls");

            string nickname = GenerateNickname(gender, age);

            // Generate random number
            int randomNumber = 1 + rand() % 20;
            cout << randomNumber << endl; //debugging purposes

            bool didGuessCorrect = false;
            

            for (int i = 0; i < g_kMaxGuesses; i++)
            {
                int guess = GetGuess(i+1, nickname);
                didGuessCorrect = ReviewGuess(guess, randomNumber);
                if (didGuessCorrect)
                {
                    break;
                }
            }

            if (didGuessCorrect == false)
            {
                DisplayGameOver(randomNumber, nickname);
            }
            isGameOver = true;
        }
        else
        {
            system("cls");
            DisplayMessage("Invalid input. Try again!");
        }
    } while (!isGameOver);   
}

string GetUserName()
{
    // Ask for name
    cout << "What is your name: ";
    string name;
    cin >> name;
    return name;
}

int AskForGender()
{
    int gender;

    do
    {
        // Ask for gender
        cout << "    What is your gender: " << endl;
        cout << "    1) Male." << endl;
        cout << "    2) Female." << endl;
        cout << "    3) Other." << endl;
        cout << "press 1, 2, or 3: ";

        cin >> gender;

        if (cin.fail())
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
    
    return gender;
}

int AskForAge()
{
    int age;

    do
    {
        // Ask for age
        cout << "    How old are you: ";
        cin >> age;

        if (cin.fail())
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
    
    return age;
}

string GenerateNickname(int gender, int age)
{
    // Generate nickname
    string nickname;
    if (gender == g_kMaleGender)
    {
        if (age > 60)
        {
            nickname = "old man";
        }
        else if (age < 10)
        {
            nickname = "little man";
        }
        else
        {
            nickname = "bud";
        }

    }
    else if (gender == g_kFemaleGender)
    {
        if (age > 60)
        {
            nickname = "old lady";
        }
        else if (age < 10)
        {
            nickname = "little lady";
        }
        else
        {
            nickname = "ma'am";
        }

    }
    else // Other gender
    {
        nickname = "friend";
    }

    return nickname;
}

int GetGuess(int turn, string nickname)
{
    int guess;

    do
    {
        cout << "Guess " << turn << ": " << "Alright " << nickname << " please guess the random number : ";
        cin >> guess;

        if (cin.fail())
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
    
    return guess;
}

bool ReviewGuess(int guess, int randomNumber)
{
    if (guess == randomNumber)
    {
        DisplayMessage("You are corrrect!");
        return true;
    }
    else
    {
        if (guess > randomNumber)
        {
            DisplayMessage("Your guess is too high!");
        }
        else
        {
            DisplayMessage("Your guess is too low!");
        }
        return false;
    }
}

void DisplayGameOver(int randomNumber, string nickname)
{
    cout << "Too bad " << nickname << " the number was " << randomNumber << endl;
    DisplayMessage("Better luck next time!");
}