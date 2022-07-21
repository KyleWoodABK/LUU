#include <iostream>
#include "Character.h"

using namespace std;

int main()
{
	constexpr int numberofCharacters = 20;
	constexpr int numberofPlayers = 2;
	constexpr int numberofEnemies = numberofCharacters-numberofPlayers;

	Character* pCharacterArray[numberofCharacters];
	
	// Create Players
	for (int i = 0; i < numberofPlayers; ++i)
	{
		pCharacterArray[i] = new Player(100,1,3);
	}
	
	// Create Enemies
	for (int i = 0; i < numberofEnemies; ++i)
	{
		pCharacterArray[i+numberofPlayers] = new Enemy(100, 6, 9,8);
	}

	for (int i = 0; i < numberofCharacters; ++i)
	{
		pCharacterArray[i]->Draw();
	}
	
	for (int i = 0; i < numberofCharacters; ++i)
	{
		delete pCharacterArray[i];
		pCharacterArray[i] = nullptr;
	}


	
	/*Character character(100,6,9);
	Player player(100,1,3);
	Enemy enemy(100,2,4,8);

	character.Draw();
	player.Draw();
	enemy.Draw();*/


}


