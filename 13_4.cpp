#include <iostream>
using namespace std;
struct Point{
    Point():x(0),y(0){}
    Point(const Point& p):x(p.x),y(p.y){
        cout << "calling copy constructor...\n";
    }
    int x;
    int y;
};

Point global;

Point foo_bar(Point arg)  // 1
{
    Point local = arg, *heap = new Point(global); // 2 and 3
    *heap = local;   // assignment here
    Point pa[4] = {local, *heap}; // 4, 5
    return *heap; //6
}


int main()
{
    Point arg;
    Point ret = foo_bar(arg);
    return 0;
}