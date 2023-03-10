#include <iostream>
#include <string.h>

#include "Client.cpp"

using namespace std;

int main()
{
    Client p;
    p.setName("Ala'a");
    p.setID(1001);
    cout << p.getID() << endl
         << p.getName() << endl;
}