#include <iostream>
#include <vector>
using namespace std;

inline int f(const int, const int);
typedef decltype(f) foo;

inline int Add(const int val1, const int val2)
{
    return val1 + val2;
}
inline int Subtract(const int val1, const int val2)
{
    return val1 - val2;
}
inline int Multiply(const int val1, const int val2)
{
    return val1 * val2;
}
inline int Divide(const int val1, const int val2)
{
    return val1 / val2;
}

int main()
{
    vector<foo*> vec{Add, Subtract, Multiply, Divide};
    for(auto & it :vec)
    {
        cout << it(2, 2) << endl;
    }
    return 0;
}