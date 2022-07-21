#pragma once
#include <iostream>
using namespace std;
class Enemy2
{
	float m_Health;
	int m_xPosition;
	int m_yPosition;
	bool m_isAlive;
	float m_Strength;

public:
	Enemy2(float health, int x, int y, float strength)
		: m_Health(health)
		, m_xPosition(x)
		, m_yPosition(y)
		, m_isAlive(true)
		, m_Strength(strength)
	{

	}

	void Draw()
	{
		std::cout << "*";
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

	
};

