#include <iostream>
#include "include/7_41_Sales_data.h"
using namespace std;
using std::cout;
using std::endl;

int main()
{
    cout << "1. default way: " << endl;
    cout << "----------------" << endl;
    Sales_data s1;
    
    cout << "\n2. using std::string as parameter: " << endl;
    cout << "----------------" << endl;
    Sales_data s2("Hello world");

    cout << "\n3. using three parameters: " << endl;
    cout << "----------------" << endl;
    Sales_data s3("Hello world", 2, 15.0);

    cout << "\n4. using istream as parameter: " << endl;
    cout << "----------------" << endl;
    Sales_data s4(std::cin);

    return 0;
}