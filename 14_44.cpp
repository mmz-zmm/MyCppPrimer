#include <iostream>
#include <vector>
#include <string>
#include <functional>
#include <map>
using namespace std;

int add(int i, int j) { return i + j; }
auto mod = [](int i, int j) { return i % j; };
struct divide
{
    int operator()(int denominator, int divisor) {
         return denominator / divisor; 
    }
};
map<string, function<int(int, int)>> binops = {
    {"+", add},
    {"-", minus<int>()},
    {"/", divide()},
    {"*", [](int i, int j) { return i * j; }},
    {"%", mod}};

void test_14_44()
{
    while(1){
        cout << "Please input like 2 * 5:";
        int lhs, rhs;
        string op;
        cin >> lhs >> op >> rhs;
        cout << binops[op](lhs, rhs) << endl;
    }
}

int main()
{
    test_14_44();
    return 0;
}