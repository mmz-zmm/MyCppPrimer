#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct LongDouble{
    LongDouble(double = 0.0){}
    operator double() { return double(0); }
    operator float() { return float(0); }
};

void calc(int) { cout << __func__ <<"(int)"<< endl; }
void calc(LongDouble) { cout << __func__ <<"(LongDouble)"<< endl; }

void test_14_51()
{
    double dval = 1.965;
    calc(dval);
}


void foo(const string& name){cout <<"string"<<endl;}
void foo(bool on){cout << "bool" <<endl;}

int main()
{
    foo("C++");

    test_14_51();
    return 0;
}