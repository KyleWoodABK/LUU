#pragma once
// by default all members of struct ar public
struct Point
{
	int x;
	int y;

	Point()
		: x(0)
		, y(0)
	{

	}

	Point(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
};

