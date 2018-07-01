#include <iostream>
#include "Sales_data.h"
using namespace std;


int main()
{
    Sales_data s1;
    print(cout,s1) << endl;

    Sales_data s2("0111102");
    print(cout,s2) << endl;

    Sales_data s3("0111103", 10, 15);
    print(cout,s3) << endl;

    Sales_data s4(cin);
    print(cout,s4) << endl;
    return 0;
}