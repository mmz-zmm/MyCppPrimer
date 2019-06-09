#include "include/13_39_StrVec.h"
#include <memory>
#include <string>
#include <iostream>
#include <algorithm>

void f()
{
    StrVec s2{"The", "cat", "is", "on", "the", "mat"};
    StrOut(s2);   
}

int main()
{
    StrVec s;
    s.push_back(std::string("Hello"));
    s.push_back(std::string("World"));

    StrOut(s);

    StrVec s2{"The", "cat", "is", "on", "the", "mat"};
    StrOut(s2);

    std::cout << "==================\n";
    f();

    std::for_each(s2.begin(), s2.end(), [&s2](std::string &s) {  s += "_yes"; });
    StrOut(s2);

    return 0;
}