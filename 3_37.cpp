#include <iostream>
using namespace std;


int main()
{
    const char ca[] = {'h','e','l','l','o'};  // 注意此处没有'\0'，输出时有问题，知道遇到一个'\0'才停止
    const char *cp = ca;
    while(*cp){
        cout << *cp << endl;
        ++cp;
    }
    return 0;
}