#include <iostream>
#include <string>
using namespace std;


int main() {
    string a = "Hello";
    string b = "World";

    cout << "Strings before swap: a = " << a << " and b = " << b << endl;

    a = a + b;

    b = a.substr(0, a.length() - b.length());

    a = a.substr(b.length());

    cout << "Strings after swap: a = " << a << " and b = " << b << endl;

    return 0;
}
