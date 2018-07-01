#include <iostream>
#include "include/7_32.h"
using namespace std;



int main()
{
    Screen mySreen(5, 5, 'X');
    mySreen.move(4, 0).set('#').display(cout);
    cout << "\n";
    mySreen.display(cout);
    cout << "\n";

    Windows_mgr windows_msg;
    windows_msg.clear(0);
    return 0;
}