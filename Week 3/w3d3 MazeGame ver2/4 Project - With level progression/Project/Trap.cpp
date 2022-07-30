#include "Trap.h"
#include <iostream>
#include <windows.h>

Trap::Trap(int x, int y, ActorColor Red):PlacableActor(x,y,Red)
{
}

void Trap::Draw()
{
	std::cout << (char)157;
}