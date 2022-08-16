#include <iostream>
#include <thread>
#include <chrono>

using std::cout;
using std::endl;
using std::thread;
using std::chrono::seconds;
using std::chrono::milliseconds;
using std::this_thread::sleep_for;

int a = 0;
bool shouldPauseThread = false;

void UpdateA()
{
    while (true)
    {
        if (shouldPauseThread)
        {
            sleep_for(seconds(1));
            shouldPauseThread = false;
        }
        a++;
        sleep_for(milliseconds(50));
    }
}

void DisplayA()
{
    int previousA = a;
    while (true)
    {
        int diff = a - previousA;
        system("cls");
        if (diff!=0)
        {
            cout << diff << endl;
            previousA = a;
        }
        else
        {
            shouldPauseThread = true;
            cout << "Pause thread" << endl;
        }
        sleep_for(milliseconds(50));
    }
}

int main()
{
    thread updateThread(UpdateA);
    thread displayThread(DisplayA);

    updateThread.join();
    displayThread.join();
}