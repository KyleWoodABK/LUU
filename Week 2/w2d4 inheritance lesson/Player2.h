#pragma once
#include <iostream>
using namespace std;
class Player2
{
	float m_Health;
	int m_xPosition;
	int m_yPosition;
	bool m_isAlive;
	bool m_hasKey;

public:
	Player2(float health, int x, int y)
		: m_Health(health)
		, m_xPosition(x)
		, m_yPosition(y)
		, m_isAlive(true)
		, m_hasKey(false)
	{

	}

	void Draw()
	{
		std::cout << "@";
	}

	void Move(int x, int y)
	{
		m_xPosition += x;
		m_yPosition += y;
	}

	void TakeDamage(float damage)
	{
		if (m_isAlive)
		{
			m_Health -= damage;
			if (m_Health <= 0)
			{
				m_Health = 0;
				m_isAlive = false;
			}
		}
	}

	void UseHealth(float health)
	{
		m_Health += health;
		if (!m_isAlive)
		{
			m_isAlive = true;
		}
	}

	void PickupKey()
	{
		m_hasKey = true;
	}
};

