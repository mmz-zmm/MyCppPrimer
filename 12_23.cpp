#include <iostream>
#include <cstring>
#include <string>
using namespace std;

char* char_concat(char *c1, size_t size1,char *c2, size_t size2)
{
    char* ret = new char[size1 + size2 + 1];
    strcpy(ret, c1);
    strncat(ret, c2, size2);
    return ret;
}

char* string_concat(const string &s1, const string &s2)
{
    char *ret = new char[s1.size() + s2.size() + 1];
    strcpy(ret, (s1 + s2).c_str());
    return ret;
}

int main()
{
    char c1[] = "hello";
    char c2[] = "world";
    char *c3 = char_concat(c1, strlen(c1), c2, strlen(c2));
    cout << c3 << endl;
    delete[] c3;

    string s1("hello"), s2("world");
    char *c4 = string_concat(s1, s2);
    cout << c4 << endl;
    delete[] c4;
    return 0;
}