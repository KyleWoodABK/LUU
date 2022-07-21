

#include <iostream>

using namespace std;

// global variables
bool g_isEven = false;
bool g_isOdd = false;
bool g_isPositive = false;
bool g_isNegative = false;
bool g_isZero = false;

// function declarations
void HelloWorld();

int GetYear();

int Add(int number1, int number2);

void PrintMessage(string message);

float Max(float n1, float n2, float n3);

bool IsEven(int number);
bool IsOdd(int number);

void Swap(int& par1, int& par2); // & allows to pass by reference rather than just pass by value

//void AnalyzeNumber(int number, bool& isEven, bool& isOdd, bool& isZero, bool& isPositive, bool& isNegative); //necessary is variables aren't declared globally
void AnalyzeNumber(int number);

int main()
{
    // fucntion calls
    HelloWorld();

    int year = GetYear();
    cout << "Year " << year << endl;

    int result = Add(1, 2);
    cout << "1 + 2 = " << result << endl;
    //cout << "1 + 2 = " << Add(1, 2) << endl; //alt

    PrintMessage("Hello");
    PrintMessage("World!");

    PrintMessage("Testing Max");
    float max = Max(20.5f, 50.5f, 30.5f);
    cout << "20.5f, 50.5f, 30.5f max is " << max << endl;

    PrintMessage("Testing Even/Odd");
    int number = 11;
    bool isEven = IsEven(number);
    bool isOdd = IsOdd(number);
    if (isEven)
    {
        cout << number << " is even!" << endl;
    }
    if (isOdd)
    {
        cout << number << " is odd!" << endl;
    }

    int arg1 = 10;
    int arg2 = 20;

    cout << "Before Swap" << endl;
    cout << "Arg1 = " << arg1 << " Arg2 = " << arg2 << endl;
    Swap(arg1, arg2);
    cout << "After Swap" << endl;
    cout << "Arg1 = " << arg1 << " Arg2 = " << arg2 << endl; 

    int number2 = -21;
    
    //AnalyzeNumber(number2, isEven, isOdd, isZero, isPositive, isNegative); //needed for non global variables
    AnalyzeNumber(number2);
    cout << "Analyzing number: " << number2 << endl;
    if (g_isOdd)
    {
        cout << "The number is odd!" << endl;
    }
    if (g_isEven)
    {
        cout << "The number is even!" << endl;
    }
    if (g_isZero)
    {
        cout << "The number is zero!" << endl;
    }if (g_isPositive)
    {
        cout << "The number is positive!" << endl;
    }if (g_isNegative)
    {
        cout << "The number is negative!" << endl;
    }
}

// function definitions
void HelloWorld()
{
    cout << "Hello World!" << endl;
}

int GetYear()
{
    return 2020;
}

int Add(int number1, int number2)
{
    int result = number1 + number2;
    return result;
    //return number1 + number2; // alternate way 
}

void PrintMessage(string message)
{
    cout << message << endl;
}

float Max(float n1, float n2, float n3)
{
    float max = n1;
    if (n2 > max)
    {
        max = n2;
    }
    if (n3 > max)
    {
        max = n3;
    }
    return max;
}

bool IsEven(int number)
{
    if (number % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool IsOdd(int number)
{
    return !IsEven(number);
}

void Swap(int& par1, int& par2)
{
    int temp = par1;
    par1 = par2;
    par2 = temp;
}

//void AnalyzeNumber(int number, bool& isEven, bool& isOdd, bool& isZero, bool& isPositive, bool& isNegative) //edit bc global var
void AnalyzeNumber(int number)
{
    if (number % 2 == 0)
    {
        g_isEven = true;
        g_isOdd = false;
    }
    else
    {
        g_isOdd = true;
        g_isEven = false;
    }

    if (number > 0)
    {
        g_isPositive = true;
        g_isNegative = false;
        g_isZero = false;
    }
    else if (number < 0)
    {
        g_isPositive = false;
        g_isNegative = true;
        g_isZero = false;
    }
    else
    {
        g_isPositive = false;
        g_isNegative = false;
        g_isZero = true;
    }
}

/*
functions

function declaration
    returnType Identifier(parameters)
usually appear before the main

function definition
    returnType Identifier(parameters)
    {
        //statements
    }
using appears after the main


//example format

#include <iostream>

using namespace std;

// function declaration
returnType Identifer(parameters);

int main()
{
    // function call
    Identifier(arguments);
}

//function definition
returnType Identifier(parameters)
{
    // statements
}

*/
