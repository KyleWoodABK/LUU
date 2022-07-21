#include <iostream>

using namespace std;

int main()
{
    int myPowerups[5]{};

    // Iintialize array
    for (int i = 0; i < 5; i++)
    {
        myPowerups[i] = i * 2;
    }

    // Display array
    for (int i = 0; i < 5; i++)
    {
        cout << "Element at index " << i << " is " << myPowerups[i] << endl;
    }


    float myGrades[5] = { 90.5f, 56.5f, 60.6f, 95.5f, 59.9f };

    // Calculate average
    float sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += myGrades[i];
    }
    float average = sum / 5;
    
    cout << "My grades for the Fall semester are: ";
    for (int i = 0; i < 5; i++)
    {
        cout << myGrades[i] << " ";
    }
    cout << endl;
    cout << "Average grade is: " << average << endl;
}

/*
array tips
    array index starts at 0
    array index ends at sizeOfArray-1
    if array has 5 elements the last one is at index 4
    iterating from 0 to <= size will process too many elements, needs to be from 0 to < size
    use assertions when dealing with arrays

dataType identifier[size];
    int myPowerups[5];
    int myPowerups[] = { 20, 30, 5, 10, 40 };
    int myPowerups[] { 20, 30, 5, 10, 40 };
    int myPowerups[5] = { };
    int myPowerups[5] { };

    
    int myPowerups[5] { };
    myPowerups[0] = 20;
    myPowerups[1] = 30;
    myPowerups[2] = 5;
    myPowerups[3] = 10;
    myPowerups[4] = 40;

    cout<< "First element is " << myPowerUps[0];
    int sumOfFirstTwo = myPowerups[0] = myPowerups[1];
*/
