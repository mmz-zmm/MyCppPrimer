#include <iostream>
#include <fstream>
#include <string>
#include "include/7_26_Sales_data.h"
using namespace std;


int main(int argc, char **argv)
{
    ifstream in(argv[1]);
    Sales_data total;
    if(read(in, total))
    {
        Sales_data trans;
        while(read(in, trans))
        {
            if(total.isbn() == trans.isbn())
            {
                total.combine(trans);
            }
            else
            {
                print(cout, total) << endl;
                total = trans;
            }
        }
        print(cout, total) << endl;
        
    }
    else
    {
        cerr << "No data?!" << endl;
        return -1;
    }
    return 0;
}