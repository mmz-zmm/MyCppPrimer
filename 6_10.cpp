#include <iostream>
using namespace std;
void exchangeValue(int *const val1, int *const val2)
{
    int tmp = *val1;
    *val1 = *val2;
    *val2 = tmp;
    return;
}

int main()
{
    int val1 = 1, val2 = 3;
    cout << "before exchange, val1 = " << val1 << ", val2 = " << val2 << endl;
    exchangeValue(&val1, &val2);
    cout << "after exchange, val1 = " << val1 << ", val2 = " << val2 << endl;
    return 0;
}