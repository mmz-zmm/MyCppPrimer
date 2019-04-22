#include <iostream>
#include <vector>
using namespace std;


int main()
{
    constexpr size_t row = 3, column = 4;
    int ia[row][column] = {
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 10, 11}};
    
    cout << "Method 1: " << endl;
    for(const auto & pRow: ia){
        for(auto pColumn: pRow){
            cout << pColumn << " ";
        }
        cout << endl;
    }

    cout << "Method 2: " << endl;
    // method 2
    for (size_t i= 0; i != row; ++ i){
        for (size_t j = 0; j != column; ++j)
        {
            cout << ia[i][j]<< " ";
        }
        cout << endl;
    }
    cout << "Method 3: " << endl;
    // method 3
    for (auto pRow = ia; pRow != ia + row; ++ pRow){
        for (auto pColum = *pRow; pColum != *pRow + column; ++ pColum){
            cout << *pColum << " ";
        }
        cout << endl;
    }
    bool b = true;
    bool b2 = -b;
    cout << b2 << endl;
    return 0;

}