#include <iostream>
#include <windows.h>

#include "Key.h"
#include "AudioManager.h"
#include "Player.h"

void Key::Draw()
{
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(console, (int)m_color);

	std::cout << "+";
	SetConsoleTextAttribute(console, (int)ActorColor::Regular);
}

void Key::Collide(PlacableActor& player, int& newPlayerX, int& newPlayerY, bool& beatLevel)
{
	if (!dynamic_cast<Player*>(&player)->HasKey())
	{
		AudioManager::GetInstance()->PlayKeyPickupSound();
		dynamic_cast<Player*>(&player)->PickupKey(this);
		Remove();
		player.SetPosition(GetXPosition(), GetYPosition());
	}
}
