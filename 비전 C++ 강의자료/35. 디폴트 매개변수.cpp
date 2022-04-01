#include <iostream>

using namespace std;

class Unit {
	int x, y;

public:
	Unit(int x = 0, int y = 0) : x(x), y(y) {}

	int GetX() { return x; }
	int GetY() { return y; }
};
int main() {
	Unit A, B(10), C(10, 20);
	cout << "A: " << A.GetX() << "," << A.GetY() << "\n";
	cout << "B: " << B.GetX() << "," << B.GetY() << "\n";
	cout << "C: " << C.GetX() << "," << C.GetY() << "\n";
}