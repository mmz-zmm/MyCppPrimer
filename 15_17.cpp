#include <iostream>
#include <vector>
#include <string>
#include "15_3_Quote.h"
#include "15_15_Disc_Quote.h"
#include "15_16_Limit_Quote.h"
using namespace std;


void test_15_17()
{
    Quote  book1("Three body", 100);
    Bulk_quote book2("Game of throne", 120, 3, 0.2);
    Limit_quote book3("Why women kills", 100, 3, 0.1);
    Disc_quote book4("Hi", 50, 2, 0.3);

    print_total(cout, book1, 2);

    print_total(cout, book2, 4);

    print_total(cout, book3, 4);
}

int main()
{
    test_15_17();
    return 0;
}