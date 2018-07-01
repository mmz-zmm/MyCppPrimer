#include <iostream>
#include "include/7_27_Screen.h"
using namespace std;


int main()
{
    Screen mySreen(5, 5, 'X');
    mySreen.move(4, 0).set('#').display(cout);
    cout << "\n";
    mySreen.display(cout);
    cout << "\n";
    return 0;
}