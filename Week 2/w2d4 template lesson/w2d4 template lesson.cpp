#include <iostream>
#include "Point.h"
using namespace std;
int main()
{
    Point<int> p1(10, 5);
    Point<float> p2(5.3f, 1.5f);
    Point<double> p3(15.2, 41.5);

    int largestP1 = p1.GetLargerCoordinate();
    float largestP2 = p2.GetLargerCoordinate();
    double largestP3 = p3.GetLargerCoordinate();
}

/*
templates

template <typename T>
Type Maximum(Type a, Type b)
{
    if(a > b)
        return a;
    return b;


*/
