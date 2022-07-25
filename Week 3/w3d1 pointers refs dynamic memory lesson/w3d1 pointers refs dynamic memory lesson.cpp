
#include <iostream>
using namespace std;

void Swap(int* pNumber1, int* pNumber2);
void Swap(int& pNumber1, int& pNumber2);

int main()
{
    int variable = 10;
    int* pointer = &variable;

    int newVariable = *pointer; // 10
    *pointer = 20; // variable == 20

    cout << "variable: " << variable << endl; // 20
    cout << "&variable: " << &variable << endl; // address
    cout << "pointer: " << pointer << endl; // should be same as above
    cout << "&pointer: " << pointer << endl; // address of pointer variable
    cout << "*pointer: " << *pointer << endl; // 20


    int a = 10;
    int b = 20;

    Swap(&a, &b);
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    Swap(a, b);
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    
    Swap(a, b);
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
}

void Swap(int* pNumber1, int* pNumber2)
{
    int temp = *pNumber1;
    *pNumber1 = *pNumber2;
    *pNumber2 = temp;
}

void Swap(int& number1, int& number2)
{
    int temp = number1;
    number1 = number2;
    number2 = temp;
}

/*

int myAge = 30; // Value
int& refAge = myAge; // Reference
cout << myAge << endl; // 30
cout << refAge << endl; // 30
myAge = 31;

cout << myAge << endl; // 31
cout << refAge << endl; // 31

refAge = 32;

cout << myAge << endl; // 32
cout << refAge << endl; // 32


references always have to reference what they're pointing to in declaration
    int& badRef; // gives error, needs assignment


int myAge = 30; // Value
int myOtherAge = 35; // Value
int& refAge = myAge; // Reference

refAge = myOtherAge; // changes value of what it is pointing to

cout << myAge << endl; // 35
cout << myOtherAge << endl; // 35
cout << refAge << endl; // 35

// declaring pointers
    dataType* userIdentifier = someAddress;
    use & for the address of a variable
        &variableName;

int var = 10;
int* ptr = &var;

cout << "var: " << var << endl;
cout << "ptr: " << ptr << endl; // address of var

bool isPlayerAlive = true;
bool isGameOver = false;
bool* pToBool = &isPlayerAlive; // pToBool poinrs to the address of isPlayerAlive
pToBool = &isGameOver; // pToBool points to the address of isGameOver
pToBool = nullptr; // pToBool points to nothing, no memory address

// dereference

int var = 10;
int* ptr = &var;
// dereference the pointer, this gets the value of it
int newVar = *ptr; // newVar is 10
// dereference the pointer, this sets the new value to 20
*ptr = 20; // var is now also 20


*/
