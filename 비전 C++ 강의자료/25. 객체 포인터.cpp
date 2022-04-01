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
	Unit* pUnit = aUnit;//�迭�� ù��° �ּ��� �ּڰ��� ��� �����Ƿ� �����ͷ� �� �� ����

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
