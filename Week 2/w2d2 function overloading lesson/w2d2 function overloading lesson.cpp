#include <iostream>

using namespace std;

// function declarations
//int Add(int a, int b);
//float Add(float a, float b);
//double Add(double a, double b);

//template <typename T>
//T Add(T a, T b);

void DisplayMessage(string message);
//void DisplayMessage(string message, int number);
//void DisplayMessage(string message, float number);
//void DisplayMessage(string message, double number);

template <typename T>
void DisplayMessage(string message, T number);

template <typename T>
T Add(T v);
template <typename T, typename... Args>
T Add(T first, Args... rest);

int main()
{
    // function calls
    int i = Add(1, 2);
    float f = Add(3.3f, 6.6f, 4.32f, 55.4f);
    double d = Add(4.4, 2.4);

    DisplayMessage("Testing Overloaded functions");
    DisplayMessage("Integer Addition = ", i);
    DisplayMessage("Float Addition = ", f);
    DisplayMessage("Double Addition = ", d);
}

// function definitions
//int Add(int a, int b)
//{
//    return a + b;
//}
//float Add(float a, float b)
//{
//    return a + b;
//}
//double Add(double a, double b)
//{
//    return a + b;
//}

//template <typename T>
//T Add(T a, T b)
//{
//    return a + b;
//}

void DisplayMessage(string message)
{
    cout << message << endl;
}
//void DisplayMessage(string message, int number)
//{
//    cout << message << number << endl;
//}
//void DisplayMessage(string message, float number)
//{
//    cout << message << number << endl;
//}
//void DisplayMessage(string message, double number)
//{
//    cout << message << number << endl;
//}

template <typename T>
void DisplayMessage(string message, T number)
{
    cout << message << number << endl;
}

template <typename T>
T Add(T v)
{
    return v;
}
template <typename T, typename... Args>
T Add(T first, Args... rest)
{
    return first + Add(rest...);
}