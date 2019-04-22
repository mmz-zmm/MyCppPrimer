#include <iostream>
#include "Sales_data.h"
using namespace std;

int main()
{
    Sales_data total;
    if(read(total))
    {
        Sales_data trans;
        while(read(trans))
        {
            if(total.isbn() == trans.isbn())
            {
                total.combine(trans);
            }
            else
            {
                print(total);
                total = trans;
            }
        }
        print(total);
    }
    else
    {
        cerr << "No data?!" << endl;
        return -1;
    } 
    return 0;
}