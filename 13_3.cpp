#include <iostream>
#include "include/12_2_StrBlob.h"
using namespace std;


int main()
{
    StrBlob blob1{"good","luck"};
    cout << blob1.count() << endl;
    StrBlob blob2 = blob1;
    cout << blob1.count() << endl;
    return 0;
}