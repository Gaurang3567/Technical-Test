#include <iostream>
#include <string>
using namespace std;

int main()
{
	int x = 10, y = 5;
	x = x ^ y; 
	y = x ^ y; 
	x = x ^ y; 
	cout << "Strings after swap: a=" << x << " and b=" << y;
	return 0;
}

