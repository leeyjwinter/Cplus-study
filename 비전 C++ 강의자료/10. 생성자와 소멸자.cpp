#include <iostream>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

class Unit {
	int status;
public:
	Unit(int a);
	~Unit();
	void fly();
};

Unit::Unit(int a) : status(a) {};
Unit::~Unit() {
	cout << "Unit Destructing";
	status = 0;
}

void Unit::fly() {
	cout << status << endl;
}

int main() {
	Unit oUnit(1);
	oUnit.fly();
	return 0;
}

