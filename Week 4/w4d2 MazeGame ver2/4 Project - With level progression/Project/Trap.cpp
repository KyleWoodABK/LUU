#include "Trap.h"
#include <iostream>
#include <windows.h>
#include "AudioManager.h"
#include "Player.h"

Trap::Trap(int x, int y, ActorColor Red):PlacableActor(x,y,Red)
{
}

void Trap::Draw()
{
	std::cout << (char)157;
}

void Trap::Collide(PlacableActor& player, int& newPlayerX, int& newPlayerY, bool& beatLevel)
{
	AudioManager::GetInstance()->PlayLoseLivesSound();
	Remove();
	player.SetPosition(GetXPosition(), GetYPosition());
	dynamic_cast<Player*>(&player)->DecrementLives();
}
