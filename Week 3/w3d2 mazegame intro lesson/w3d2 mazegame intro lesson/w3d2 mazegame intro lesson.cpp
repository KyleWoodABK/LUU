#include <iostream>
#include <string>

#define NOMINMAX
#include "Game.h"
#include "AudioManager.h"

using namespace std;

int main()
{
    Game myGame;

    if (myGame.Load())
    {
        while (!myGame.IsGameOver())
        {
            myGame.Run();
        }

        if (myGame.DidUserQuit())
        {
            cout << "Thanks for playing!" << endl;
        }
        else if (myGame.GetPlayerLives())
        {
            cout << "You lost the game!" << endl;
            //PlayLoseSound();
        }
        else
        {
            cout << "YOU WON!!!!!" << endl;
            //PlayWinSound();
        }
        
    }
    else
    {
        cout << "Game did not load. Terminating now!" << endl;
    }
}



void PlayDoorClosedSound()
{
    Beep(500, 75);
    Beep(500, 75);
}

void PlayDoorOpenSound()
{
    Beep(1397, 200);
}

void PlayKeyPickupSound()
{
    Beep(1568, 200);
}

void PlayWinSound()
{
    Beep(1568, 200);
    Beep(1568, 200);
    Beep(1568, 200);
    Beep(1245, 1000);
    Beep(1397, 200);
    Beep(1397, 200);
    Beep(1397, 200);
    Beep(1175, 1000);
}

