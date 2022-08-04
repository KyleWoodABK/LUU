#pragma once
#include "PlacableActor.h"
class Goal : public PlacableActor
{
public:
	Goal(int x, int y);

	virtual ActorType GetType() override { return ActorType::Goal; }
	virtual void Draw() override;
	virtual void Collide(PlacableActor& player, int& newPlayerX, int& newPlayerY, bool& beatLevel) override;
};

