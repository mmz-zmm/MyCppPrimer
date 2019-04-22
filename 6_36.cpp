#include <iostream>
#include <string>
using namespace std;
// 0
string (&func(string str))[10];

// 1
using array = string[10];
array &func(string str);

// 2
auto func(string str) -> string (&)[10];

// 3
string arrs[10];
decltype(arrs) &func(string str);

int odd[] = {1,3,5,7,9};
int even[] = {0, 2, 4, 6, 8};

decltype(odd) *arrPtr(int i)
{
    return (i % 2) ? &odd : &even;
}
decltype(odd) &arrPtr2(int i)
{
    return (i % 2) ? odd : even;
}

const string &shorterString(const string &s1, const string &s2);
auto &r = shorterString("a", "b");
int main()
{
    decltype(odd) *a = arrPtr(2);
    cout << (*a)[2] <<endl;
    decltype(odd) &b = arrPtr2(2);
    cout << b[2] <<endl;
    return 0;
}