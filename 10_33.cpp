#include <iostream>
#include <iterator>
#include <fstream>
using namespace std;


int main(int argc, char ** argv)
{
    ifstream in(argv[1]);
    ofstream odd_out(argv[2]);
    ofstream even_out(argv[3]);
    istream_iterator<int> in_iter(in), eof;
    ostream_iterator<int> odd_out_iter(odd_out, " ");
    ostream_iterator<int> even_out_iter(even_out," ");

    while(in_iter != eof){
        if(*in_iter % 2 )
            odd_out_iter = *in_iter++;
        else
            even_out_iter = *in_iter++;
    }

    return 0;
}