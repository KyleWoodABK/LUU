#pragma once
#include "PlacableActor.h"
class Trap : public PlacableActor
{
public:
	Trap(int x, int y, ActorColor Red);

	virtual ActorType GetType() override { return ActorType::Trap; }
	virtual void Draw() override;
};

