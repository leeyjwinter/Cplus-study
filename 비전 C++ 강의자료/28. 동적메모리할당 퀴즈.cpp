#include <iostream>

using namespace std;
class Unit {
	int x, y;
public:
	Unit() : x(1), y(1) {}
	Unit(int x, int y) : x(x), y(y) {}
	void Print() {
		cout << x << "," << y << "\n";
	}
};




int main() {

	Unit* pUnit = new Unit[2];

	pUnit[0] = Unit(1, 2);
	pUnit[1] = Unit(3, 4);
	for (int i = 0; i < 2; i++) {
		pUnit[i].Print();
	}



}