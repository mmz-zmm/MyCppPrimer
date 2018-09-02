#include <iostream>
using namespace std;

void fcn1()
{
    size_t v1 = 42;
    auto f = [&v1] {
        if(v1)
        {
            --v1;
            return false;
        }
        return true;
    };
    while(!f()){
        cout << v1 << endl;
    }
}

int main()
{
    fcn1();
`    return 0;
}