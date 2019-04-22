#include <iostream>
#include <stdexcept>
using namespace std;

int main()
{
    cout << "please enter two integers: ";
    int val1 = 0, val2 = 0;
    cin >> val1 >> val2;
    if(val2 == 0)
        throw runtime_error("divisor is zero.");
    cout << static_cast<double>(val1) / val2 << endl;
    return 0;
}