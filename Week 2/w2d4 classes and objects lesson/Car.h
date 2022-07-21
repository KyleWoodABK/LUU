#include <iostream>
#pragma once
using namespace std;
class Car
{
private:
	int m_year;

public:
	// Setter
	void SetYear(int newYear)
	{
		m_year = newYear;
	}

	// Getter
	int GetYear()
	{
		return m_year;
	}

	void Display()
	{
		cout << "Year: " << m_year << endl; // OK
	}
};

