#include <iostream>
using namespace std;
int Abs(int val)
{
    return (val < 0 ? -val : val);
}

int main()
{
    int val;
    cout << "please enter an integer: ";
    while(cin >> val)
    {
        cout << "absolute value of " << val << " is " << Abs(val) << endl;
    }
    return 0;
}