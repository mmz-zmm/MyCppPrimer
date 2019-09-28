#include <iostream>
#include <algorithm>
#include <vector>

class isEqual
{
    private:
        int expected;
    public:
    isEqual(int expected_):expected(expected_){}
    bool operator()(int actual) const 
    {
        return actual == expected;
    }
};

int main()
{
    std::vector<int> vec = {1, 2, 3, 4, 5, 6, 5, 4, 3, 2, 1};
    std::replace_if(vec.begin(), vec.end(), isEqual(5), 9);
    std::for_each(vec.begin(), vec.end(), [](int a) { std::cout << a << " "; });
    return 0;
}