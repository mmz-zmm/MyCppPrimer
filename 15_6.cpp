#include <iostream>
#include <vector>
#include <string>
#include "15_3_Quote.h"
#include "15_5_Bulk_Quote.h"
#include "15_7_Limit_Quote.h"
using namespace std;


void test_15_6()
{
    Quote  book1("Three body", 100);
    Bulk_quote book2("Game of throne", 120, 3, 0.2);
    Limit_quote book3("Why women kills", 100, 3, 0.1);

    print_total(cout, book1, 2);

    print_total(cout, book2, 2);
    print_total(cout, book2, 4);

    print_total(cout, book3, 2);
    print_total(cout, book3, 3);
    print_total(cout, book3, 4);
}

int main()
{
    test_15_6();
    return 0;
}