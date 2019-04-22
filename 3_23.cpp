#include <iostream>
#include <vector>
using namespace std;
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (auto it = vec.begin(); it != vec.end();++it){
        *it *= 2;
    }
    for(auto value:vec)
        cout << value << " ";
    cout << endl;
    return 0;
}