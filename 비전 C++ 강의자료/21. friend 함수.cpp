#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

class Unit {
	int x, y;
public:
	Unit(int i, int j) { x = i; y = j; }
	friend bool isSame(Unit a);
};


bool isSame(Unit a)
{
	if (a.x == a.y) return true;
	else return false;
}


int main(int argc, char* argv[])
{
	Unit a(1, 2), b(3, 3);
	cout << "a(1,2) : " << isSame(a) << "\n";
	cout << "b(3,3) : " << isSame(b) << "\n";
}