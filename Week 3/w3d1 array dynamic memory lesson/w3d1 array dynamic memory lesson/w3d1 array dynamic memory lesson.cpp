
#include <iostream>
using namespace std;

int* CreateGrades(int size);
void PopulateGrades(int* pMyGrades, int size);
void DisplayGrades(int* pMyGrades, int size);

int main()
{
    int size;
    cout << "How many classes do you have? " << endl;
    cin >> size;

    int* pMyGrades = CreateGrades(size);

    cout << "Please enter " << size << " grades:" << endl;

    PopulateGrades(pMyGrades, size);
    DisplayGrades(pMyGrades, size);

    delete[] pMyGrades;
    pMyGrades = nullptr;
}

int* CreateGrades(int size)
{
    int* pointer = new int[size];
    return pointer;
}

void PopulateGrades(int* pMyGrades, int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> pMyGrades[i];
    }
}

void DisplayGrades(int* pMyGrades, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << pMyGrades[i] << " ";
    }
}

/*

new dataType[ size ];

int* pIntArray = new int[5];
float* pFloatArray = new float[5];
bool* pBoolArray = new bool[5];

delete[] pIntArray
pIntArray = nullptr;

delete[] pFloatArray
pFloatArray = nullptr;

delete[] pBoolArray
pBoolArray = nullptr;

*/
