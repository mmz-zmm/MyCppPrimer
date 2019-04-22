#include <iostream>
using namespace std;
int calc(char*, char*)
{
    cout << "char*" << endl;
    return 0;
}
int calc(char *const, char *const)
{
    cout << "char* const" << endl;
    return 0;
}

int main()
{
    char * pt1 = "love";
    char *pt2 = "you";
    calc(pt1, pt2);
    return 0;
}