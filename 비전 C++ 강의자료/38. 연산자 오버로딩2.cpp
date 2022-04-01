#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>


using namespace std;

class Unit {
private:
	int hp;
	int mp;
	int unitSize;
	char* name;
public:
	Unit() {
		hp = 0;
		mp = 0;
		unitSize = 0;
		name = NULL;
	}

	Unit(int hp, int mp, int unitSize, const char* argName) : hp(hp), mp(mp), unitSize(unitSize) {
		name = new char[strlen(argName) + 1];
		strcpy(name, argName);
	}

	~Unit() {
		if (!name) {
			delete[] name;
			name = NULL;
		}
	}

	int GetSize() { return unitSize;}

	int operator+(Unit right) { return unitSize + right.unitSize; }
	int operator-(Unit right) { return unitSize - right.unitSize; }
	int operator*(Unit right) { return unitSize * right.unitSize; }

};

class HUnit :public Unit {//자식클래스
public:
	HUnit(): Unit(45, 125, 2, "HUnit") {}
};

void funcUnit(Unit a) {
	cout << a.GetSize() << endl;
}

void funcHUnit(HUnit a) {
	cout << a.GetSize() << endl;
}
int main() {
	HUnit c1, c2;
	cout << "Total Unit Size (+): " << c1 + c2 << "\n";
	cout << "Total Unit Size (-): " << c1 - c2 << "\n";
	cout << "Total Unit Size (*): " << c1 * c2 << "\n";

	Unit a;
	funcUnit(a);
	//funcHUnit(a);

	HUnit b;
	funcUnit(b);
	funcHUnit(b);
}