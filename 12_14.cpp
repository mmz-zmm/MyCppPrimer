#include <iostream>
#include <memory>
#include <string>
using namespace std;

struct destination
{
    string ip;
    string port;
    destination(string ip_, string port_):ip(ip_),port(port_){}
};
struct connection
{
    string ip;
    string port;
    connection(string ip_, string port_):ip(ip_),port(port_){}
};
connection connect(destination *pDest)
{
    shared_ptr<connection> pCon(new connection(pDest->ip, pDest->port));
    cout << "creating connection(" << pCon->ip<<":"<<pCon->port<<")" << endl;
    return *pCon;
}
void disconnect(connection Con)
{
    cout << "connection close(" << Con.ip << ":" << Con.port << ")" << endl;
}
void end_connection(connection *p) { disconnect(*p); }
void f(destination &d)
{
    connection c = connect(&d);
    shared_ptr<connection> p(&c, end_connection);
    cout << "connecting now(" << p.use_count() << ")" << endl;
}

int main()
{
    destination dest("192.168.32.3", "8080");
    f(dest);
    return 0;
}