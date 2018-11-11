#include <iostream>
#include <string>
#include <memory>
using namespace std;


int main()
{
    unique_ptr<string> p1(new string("happy"));
    //unique_ptr<string> p2(p1);
    unique_ptr<string> p3;
    p3 = p1;  // use of deleted function
    return 0;
}