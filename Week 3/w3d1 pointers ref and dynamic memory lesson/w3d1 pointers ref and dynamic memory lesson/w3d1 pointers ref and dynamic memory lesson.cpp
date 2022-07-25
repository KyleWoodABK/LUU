
#include <iostream>
using namespace std;
int main()
{
    bool* pBool = new bool{ true };
    delete pBool;
    pBool = nullptr;

    float* pFLoat = new float{ 20.5f };
    // delete before new allocation
    pFLoat = new float{ 30.5f };

    delete pFLoat;
    pFLoat = nullptr;

    int* pInt = nullptr;
    for (int i = 0; i < 5; i++)
    {
        pInt = new int{ rand() };
        cout << *pInt << endl;
    }

    delete pInt;
    pInt = nullptr;

    // memory leak - memory allocated 5 times, but only deleted once
}

/*

// Static allocaiton
constexpr int kSize = 3;
int myArray[kSize]{ 10, 20, 30 };
int* pArrayPointer = myArray;


//Dynamic allocation
new dataType{ intialValue };

int* pInt = new int{ 10 };
float* pFloat = new float{ 20.5f };
bool* pBool = new bool{ true };

delete pInt;
pInt = nullptr;

delete pFloat;
pFloat = nullptr;

delete pBool;
pBool = nullptr;
*/
