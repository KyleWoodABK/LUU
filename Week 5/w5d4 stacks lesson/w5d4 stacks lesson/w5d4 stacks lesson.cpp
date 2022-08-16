#include <iostream>
#include <vector>

using namespace std;

class Stack
{
    vector <int> stack;

public:
    void Insert(int element)
    {
        stack.push_back(element);
    }
    int Pop()
    {
        int result = stack.back();
        stack.pop_back();
        return result;
    }
    void Print()
    {
        for (int i = stack.size()-1; i >= 0; i--)
        {
            cout << stack[i] << endl;
        }
    }
};

int main()
{
    //pre increment post increment
}

