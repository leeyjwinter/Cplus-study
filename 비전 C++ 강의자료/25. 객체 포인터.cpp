#include <iostream>

using namespace std;

class Unit {
private:
	int x, y;

public:
	Unit(int a, int b) {
		x = a; y = b;
	}

	void Print() {
		cout << x << "," << y << "\n";
	}
};

int main() {
	Unit aUnit[2] = { Unit(1,2),Unit(3,4) };
	int i;
	Unit* pUnit = aUnit;//배열은 첫번째 주소의 주솟값만 담고 있으므로 포인터로 쓸 수 있음

	cout << "Using '->' operator \n";
	for (i = 0; i < 2; i++) {
		pUnit->Print();
		pUnit++;
	}

	pUnit = aUnit;

	cout << "Using '.' operator \n";
	for (i = 0; i < 2; i++) {
		(*pUnit).Print();
		pUnit++;
	}
}
