#pragma once
#include <iostream>
using namespace std;
class Vehicle
{
protected:
	string m_Make;
	string m_Model;
	int m_Year;

public:
	Vehicle(string make, string model, int year)
		: m_Make(make)
		, m_Model(model)
		, m_Year(year)
	{

	}

	virtual void Drive() = 0;
};

class Boat : public Vehicle
{
public:
	Boat(string make, string model, int year)
		: Vehicle(make, model, year)
	{

	}

	void Drive() override
	{
		std::cout << "Glug glug glug" << endl;
	}
};

class Car : public Vehicle
{
public:
	Car(string make, string model, int year)
		: Vehicle(make, model, year)
	{

	}

	void Drive() override
	{
		std::cout << "Vroom vroom" << endl;
	}
};

class Airplane : public Vehicle
{
public:
	Airplane(string make, string model, int year)
		: Vehicle(make, model, year)
	{

	}

	void Drive() override
	{
		std::cout << "Zoom whoosh" << endl;
	}
};

