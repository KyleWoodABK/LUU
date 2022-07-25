
#include <iostream>
using namespace std;
int main()
{
    std::cout << "Hello World!\n";
}

/*

int myArray[3]{ 10, 20, 30 };
int* pArrayPointer = myArray;

cout << myArray[0] << endl; // 10
cout << myArray[1] << endl; // 20
cout << myArray[2] << endl; // 30

cout << pArrayPointer[0] << endl; // 10
cout << pArrayPointer[1] << endl; // 20
cout << pArrayPointer[2] << endl; // 30

cout << *(pArrayPointer + 0) << endl; // 10
cout << *(pArrayPointer + 1) << endl; // 20
cout << *(pArrayPointer + 2) << endl; // 30

cout << *(myArray + 0) << endl; // 10
cout << *(myArray + 1) << endl; // 20
cout << *(myArray + 2) << endl; // 30



void DisplayArray(int theArray[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << theArray[i] << " ";
    }
}

void DisplayArray(int *theArray, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << theArray[i] << " ";
    }
}

constexpr int kSize = 3;
int myArray[kSize]{ 10, 20, 30 };
DisplayArray(myArray, kSize);

*/
