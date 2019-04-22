#include <iostream>
#include "include/13_26_StrBlob.h"
using namespace std;

StrBlob& StrBlob::operator=(const StrBlob&rhs)
{
    data = make_shared<vector<string>>(*rhs.data);
    return *this;
}

int main()
{
    StrBlob sb({"Hello", "world", "my", "love"});
    StrBlob sb2 = sb;
    sb2.front() = "hey";
    cout << sb2.front()<< endl;
    return 0;
}