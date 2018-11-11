#include <iostream>
#include <memory>
#include <vector>
#include <string>
#include "include/12_2_StrBlob.h"
using namespace std;

int main()
{
    const StrBlob sBlob{"Stay", "hungry", "stay", "foolish"};
    StrBlob Blob{"Stay", "foolish", "stay", "hungry"};
    StrBlob blob;

    cout << sBlob.front() << " " << sBlob.back() << endl;
    Blob.back() = "here";
    cout << Blob.front() << " " << Blob.back() << endl;
    cout << blob.front() << endl; // run time error
    return 0;
}