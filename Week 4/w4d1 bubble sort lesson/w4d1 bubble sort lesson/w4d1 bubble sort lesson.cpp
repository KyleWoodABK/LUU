//  Includes
#include <iostream>
#include <stdlib.h>
#include <chrono>

// Defines
#define ARRAY_SIZE 100

// Namespaces
using namespace std;

// Helper functions
uint32_t GetNanos();
void FillArray(int ArrayToFill[], int SizeOfArray);
int ChooseASearchKey(int ArrayToPickFrom[], int SizeOfArray);

// Sorting algorithms
void BubbleSort(int ArrayToSort[], int SizeOfArray);

// Search algorithms
void LinearSearch(int ArrayToSearch[], int SizeOfArray, int SearchKey);
void BinarySearch(int ArrayToSort[], int Low, int High, int SearchKey);

int main()
{
    // Create a dataset
    int Dataset[ARRAY_SIZE];

    // Seed our random generator and fill the dataset array with random numbers
    srand(time(nullptr));
    FillArray(Dataset, ARRAY_SIZE);

    // Pick a random number (that exists in the array) to search for
    const int SearchKey = ChooseASearchKey(Dataset, ARRAY_SIZE);

    // Perform a linear search
    uint32_t StartNanos = GetNanos();
    LinearSearch(Dataset, ARRAY_SIZE, SearchKey);
    uint32_t EndNanos = GetNanos();
    cout << "Linear Search took: " << (EndNanos - StartNanos) << "ns \n\n";

    // Sort our dataset
    StartNanos = GetNanos();
    BubbleSort(Dataset, ARRAY_SIZE);
    EndNanos = GetNanos();
    cout << "Bubble Sort took: " << (EndNanos - StartNanos) << "ns \n\n";

    // Search for search key with Binary search
    StartNanos = GetNanos();
    BinarySearch(Dataset, 0, ARRAY_SIZE, SearchKey);
    EndNanos = GetNanos();
    cout << "Binary Search took: " << (EndNanos - StartNanos) << "ns \n\n";
}

uint32_t GetNanos()
{
    using namespace std::chrono;
    return static_cast<uint32_t>(duration_cast<nanoseconds>(system_clock::now().time_since_epoch()).count());
}

void FillArray(int ArrayToFill[], int SizeOfArray)
{
    for (int i = 0; i < ARRAY_SIZE; ++i)
    {
        // Fill the array with a random number between 1 and 100
        ArrayToFill[i] = rand() % ARRAY_SIZE + 1;
    }
}

void BubbleSort(int ArrayToSort[], int SizeOfArray)
{
    int comparisons = 0;
    // Loop to control the number of passes
    for (int pass = 0; pass < SizeOfArray; ++pass)
    {
        // Loop to control the number of comparisons per pass
        for (int i = 0; i < SizeOfArray-1; ++i)
        {
            ++comparisons;

            // Compare adjacent elements
            if (ArrayToSort[i] > ArrayToSort[i + 1])
            {
                // Store the current integer in a temporary variable
                int temp = ArrayToSort[i];

                // Shift the next element to the current position
                ArrayToSort[i] = ArrayToSort[i + 1];

                // Assign the next value to the value held in temp
                ArrayToSort[i + 1] = temp;
            }
        }
    }

    cout << "Bubble sort comparisons: " << comparisons << "\n";
}

int ChooseASearchKey(int ArrayToPickFrom[], int SizeOfArray)
{
    int RandomIndex = rand() % ARRAY_SIZE + 1;
    return ArrayToPickFrom[RandomIndex];
}

void BinarySearch(int ArrayToSearch[], int Low, int High, int SearchKey)
{
    int comparisons = 0;

    // Loop until Low subscript is greater than the High subscript
    while (Low <= High)
    {
        // find the middle of the array
        int Middle = (Low + High) / 2;

        ++comparisons;

        // If the middle element matches, search is complete
        if (SearchKey == ArrayToSearch[Middle])
        {
            // Search complete
            cout << "Binary search comparisons: " << comparisons << "\n";
            cout << "Search key " << SearchKey << " found at index: " << Middle << "\n";
            return;
        }
        else if (SearchKey < ArrayToSearch[Middle])
        {
            // Search the lower half of the remaining array
            High = Middle - 1;
        }
        else
        {
            // Search the higher half of the remaining array
            Low = Middle + 1;
        }
    }
    
}

void LinearSearch(int ArrayToSearch[], int SizeOfArray, int SearchKey)
{
    int comparisons = 0;

    // Loop over each element in the array
    for (int i = 0; i < SizeOfArray; ++i)
    {
        ++comparisons;

        // check if the value matches the search key
        if (ArrayToSearch[i] == SearchKey)
        {
            // Search complete
            cout << "Linear search comparisons: " << comparisons << "\n";
            return;
        }
    }
}