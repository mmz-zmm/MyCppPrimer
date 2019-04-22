#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main()
{
    unsigned grade;
    string finalgrade1, finalgrade2;
    while(cin>>grade){
        finalgrade1 = (grade > 90) ? "high pass" : (grade > 75) ? "pass" : (grade < 60) ? "fail" : "low pass";
        
        if(grade > 90)
            finalgrade2 = "high pass";
        else if(grade > 75)
            finalgrade2 = "pass";
        else if(grade < 60)
            finalgrade2 = "fail";
        else
            finalgrade2 = "low pass";

        cout << "Final grade is: " << ((finalgrade1 == finalgrade2) ? finalgrade1 : "not equal")
                                                                                      << ".\n";
    }
    
    return 0;
}