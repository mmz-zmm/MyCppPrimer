#include <iostream>
#include <cstring>
using namespace std;


int main()
{
    char ca1[] = "It is a bad feeling!";
    char ca2[] = "you hurt me!";

    char a3[50];
    

    strcpy(a3, ca1);
    strcat(a3, " ");
    strcat(a3, ca2);

    cout << a3 << endl;



    return 0;
}