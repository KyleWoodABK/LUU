
#include <iostream>
using namespace std;
int main()
{
    std::cout << "Hello World!\n";
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

*/
