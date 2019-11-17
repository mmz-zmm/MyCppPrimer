#include <iostream>
#include <vector>
#include <string>
#include "15_21_GeometricPrimitives.h"
using namespace std;


void test_15_21()
{
    Circle circle(0.0,0.0, 3.0);
    Sphere sphere(0.0, 0.0, 0.0, 3.0);

    cout << circle.name() << endl;
    cout << circle.area() << endl;
    cout << circle.circumference() << endl;
    cout << sphere.name() << endl;
    cout << sphere.volume() << endl;
    cout << sphere.surface() << endl;
}

int main()
{
    test_15_21();
    return 0;
}