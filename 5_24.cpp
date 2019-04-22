#include <iostream>
#include <stdexcept>
using namespace std;

int main()
{
    cout << "please enter two integers: ";
    int val1 = 0, val2 = 0;
    while( cin >> val1 >> val2){
        try{
            if(val2 == 0)
                throw runtime_error("divisor is zero.");
            cout << static_cast<double>(val1) / val2 << endl;
            cout << "please enter two integer: ";
        }
        catch(runtime_error err){
            cout << err.what() << "\nTry Again? Enter y or n\n";
            char c;
            cin >> c;
            if(!cin || c == 'n')
                break;
        }
    }
    return 0;
}