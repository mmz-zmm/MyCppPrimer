#include <iostream>
using namespace std;
int main() { cout << "bool has: " << sizeof(bool) << "bytes." << endl; cout << "char has: " << sizeof(char) << "bytes." << endl;
    cout << "wchar_t has: " << sizeof(wchar_t) << "bytes." << endl;
    cout << "char16_t has: " << sizeof(char16_t) << "bytes." << endl;
    cout << "char32_t has: " << sizeof(char32_t) << "bytes." << endl;
    cout << "short has: " << sizeof(short) << "bytes." << endl;
    cout << "int has: " << sizeof(int) << "bytes." << endl;
    cout << "int* has: " << sizeof(int*) << "bytes." << endl;
    cout << "long has: " << sizeof(long) << "bytes." << endl;
    cout << "long long has: " << sizeof(long long) << "bytes." << endl;
    cout << "float has: " << sizeof(float) << "bytes." << endl;
    cout << "double has: " << sizeof(double) << "bytes." << endl;
    cout << "double* has: " << sizeof(double*) << "bytes." << endl;
    cout << "long double has: " << sizeof(long double) << "bytes." << endl;
    return 0;
}