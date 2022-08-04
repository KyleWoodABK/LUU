#pragma once
#include "PlacableActor.h"
class Key : public PlacableActor
{
public:
	Key(int x, int y, ActorColor color)
		: PlacableActor(x, y, color)
	{

	}

	virtual ActorType GetType() override { return ActorType::Key; }
	virtual void Draw() override;
	virtual void Collide(PlacableActor& player, int& newPlayerX, int& newPlayerY, bool& beatLevel) override;
};

