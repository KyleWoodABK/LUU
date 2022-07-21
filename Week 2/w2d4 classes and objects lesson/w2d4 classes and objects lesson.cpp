#include <iostream>

using namespace std;

int main()
{
    std::cout << "Hello World!\n";
}

/*
classes
    class NameOfClass
    {
        // body of class
        // data and funcitonality
    };

class Car
{
public:
    // Member variables
    int m_year;
    int m_miles;
    string m_brand;

    // Member functions
    void Display()
    {
        cout << "Brand: " << m_brand << endl;
        cout << "Year: " << m_year << endl;
        cout << "Miles: " << m_miles << endl;
    }

    void Drive(int miles)
    {
        m_miles = m_miles + miles;
    }
};


object.memberVariable;
object.MemberFunction();

    Car myCar;
    myCar.m_brand = "BMW";
    myCar.m_year = 2019;
    myCar.m_miles = 20;
    myCar.Drive(10);
    myCar.Display();


    Car* pCar = new Car;
    pCar->m_brand = "Ford";
    pCar->m_year = 2018;
    pCar->m_miles = 300;
    delete pCar;
    pCar = nullptr;


    Car(int year, int miles, string brand)
    {
        m_year = year;
        m_miles = miles;
        m_brand = brand;
    }


    Car myCar(2019, 20, "BMW");


    Car* pCar = new Car(2018, 30, "Ford");
    delete pCar;
    pCar = nullptr;


constructors
    initialize an object to a usable state

destructors
    called when object is deleted

class Car
{
public:
    // Default constructor:
    Car()
    {
        cout << "default constructor!" << endl;
    }
    // Destructor
    ~Car()
    {
        cout << "destructor!" << endl;
    }
};

default access level is private
*/