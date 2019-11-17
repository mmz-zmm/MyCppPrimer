#include <iostream>
#include <vector>
#include <string>
#include "15_3_Quote.h"
#include "15_15_Disc_Quote.h"
using namespace std;


void test_15_15()
{
    Quote  book1("Three body", 100);
    Bulk_quote book2("Game of throne", 120, 3, 0.2);

    print_total(cout, book1, 2);

    print_total(cout, book2, 4);

}

int main()
{
    test_15_15();
    return 0;
}