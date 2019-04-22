#include <iostream>
using namespace std;
int fact(int val)
{
    int ret = 1;
    while(val > 1)
    {
        ret *= val--;
    }
    return ret;
}

int main()
{
    int val;
    cout << "please enter an integer: ";
    while(cin >> val)
    {
        cout << "factorial of " << val << " is " << fact(val) << endl;
        cout << "please enter a integer: ";
    }
    return 0;
}