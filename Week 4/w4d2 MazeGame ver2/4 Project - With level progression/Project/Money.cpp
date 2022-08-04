#include <iostream>
#include "Money.h"
#include "AudioManager.h"
#include "Player.h"

Money::Money(int x, int y, int worth)
	: PlacableActor(x, y)
	, m_worth(worth)
{

}

void Money::Draw()
{
	std::cout << "$";
}

void Money::Collide(PlacableActor& player, int& newPlayerX, int& newPlayerY, bool& beatLevel)
{
	AudioManager::GetInstance()->PlayMoneySound();
	Remove();
	player.SetPosition(GetXPosition(), GetYPosition());
	dynamic_cast<Player*>(&player)->AddMoney(GetWorth());
}
