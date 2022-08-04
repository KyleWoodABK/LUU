#include <iostream>
#include "Goal.h"
#include "AudioManager.h"
#include "Player.h"
#include "GameplayState.h"

Goal::Goal(int x, int y)
	: PlacableActor(x, y)
{
	
}

void Goal::Draw()
{
	std::cout << "X";
}

void Goal::Collide(PlacableActor& player, int& newPlayerX, int& newPlayerY, bool& beatLevel)
{
	Remove();
	player.SetPosition(GetXPosition(), GetYPosition());
	beatLevel = true;
}


