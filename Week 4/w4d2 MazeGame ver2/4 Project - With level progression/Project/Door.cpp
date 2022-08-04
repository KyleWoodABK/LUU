#include <iostream>
#include <windows.h>
#include "Door.h"
#include "Player.h"
#include "AudioManager.h"

Door::Door(int x, int y, ActorColor color, ActorColor closedColor)
	: PlacableActor(x, y, color)
	, m_isOpen(false)
	, m_closedColor(closedColor)
{

}

void Door::Draw()
{
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	if (m_isOpen)
	{
		SetConsoleTextAttribute(console, (int)m_color);
	}
	else
	{
		SetConsoleTextAttribute(console, (int)m_closedColor);
	}
	std::cout << "|";
	SetConsoleTextAttribute(console, (int)ActorColor::Regular);
}

void Door::Collide(PlacableActor& player, int& newPlayerX, int& newPlayerY, bool& beatLevel)
{
	if (!IsOpen())
	{
		if (dynamic_cast<Player*>(&player)->HasKey(GetColor()))
		{
			Open();
			Remove();
			dynamic_cast<Player*>(&player)->UseKey();
			player.SetPosition(GetXPosition(), GetYPosition());
			AudioManager::GetInstance()->PlayDoorOpenSound();
		}
		else AudioManager::GetInstance()->PlayDoorClosedSound();
	}
	else player.SetPosition(GetXPosition(), GetYPosition());
}
