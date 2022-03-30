#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

using namespace std;;

class Unit {
private: 
	int x, y;
public:
	Unit(int a) {
		x = a; y = a;
	}

	void Print() {
		cout << x << "," << y << "\n";
	}
};

int main() {
	Unit aUnit[2] = { Unit(1),Unit(2) };

	for (int i = 0; i < 2; i++) {
		cout << "aUnit[" << i << "]=";
		aUnit[1].Print();
	}

	return 0;
}