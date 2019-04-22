#include <iostream>
#include <cstring>
using namespace std;


int main()
{
    size_t n{0};
    cout << "Please input the length of the string.";
    cin >> n;
    cin.ignore();
    char *p = new char[n + 1]();
    cout << "input the string: ";
    cin.get(p, n + 1);
    cout << "The string you input is : " << p << endl;
    delete[] p;
    return 0;
}