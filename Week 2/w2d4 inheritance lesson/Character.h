#pragma once
#include <iostream>
using namespace std;
class Character
{
protected:
	float m_Health;
	int m_xPosition;
	int m_yPosition;
	bool m_isAlive;

public:
	Character(float health, int x, int y)
		: m_Health(health)
		, m_xPosition(x)
		, m_yPosition(y)
		, m_isAlive(true)
	{

	}

	// Pure virtual function
	virtual void Draw() = 0;

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

class Player : public Character
{
	bool m_hasKey;

public:
	Player(float health, int x, int y)
		: Character(health, x, y)
		, m_hasKey(false)
	{

	}

	void Draw() override
	{
		std::cout << "@" << endl;
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

class Enemy : public Character
{
	float m_Strength;

public:
	Enemy(float health, int x, int y, float strength)
		: Character(health, x, y)
		, m_Strength(strength)
	{

	}

	void Draw() override
	{
		std::cout << "*" << endl;
	}
};