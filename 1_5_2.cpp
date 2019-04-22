#include <iostream>
#include "Sales_data.h"
using namespace std;


int main()
{
    Sales_data book1, book2;
    double price1, price2;
    cin >> book1.bookNo >> book1.units_sold >> price1;
    cin >> book2.bookNo >> book2.units_sold >> price2;
    book1.revenue = book1.units_sold * price1;
    book2.revenue = book2.units_sold * price2;

    if (book1.bookNo == book2.bookNo)
    {
        unsigned total_Units_sold = book1.units_sold + book2.units_sold;
        double totalRevenue = book1.revenue + book2.revenue;
        cout << book1.bookNo << " " << total_Units_sold << " " << totalRevenue << " ";
        if (total_Units_sold != 0)
        {
            cout << totalRevenue / total_Units_sold << endl;
        }
        else
        {
            cout << "No sales" << endl;
        }

        return 0;
    }
    else
    {
        cerr << "Data must refer to same ISBN" << endl;
        return -1;
    }

}