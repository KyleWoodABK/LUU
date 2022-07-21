#include <iostream>
#include "Vehicle.h"
using namespace std;
int main()
{
    Boat boat("Benetti", "Diamond", 2022);
    Car car("Toyota", "RAV4", 2021);
    Airplane plane("Boeing", "737", 1991);

    boat.Drive();
    car.Drive();
    plane.Drive();

}


