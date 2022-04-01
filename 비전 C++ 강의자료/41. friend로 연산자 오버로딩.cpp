#include <iostream>

using namespace std;

class Unit {
private:
	int hp;

public:
	Unit() { hp = 0; }
	Unit(int i) { hp = i; }

	int GetHP() { return hp; }

	friend Unit operator+(Unit left,Unit right);

};

Unit operator+(Unit left, Unit right) {
	return left.hp + right.hp;
}

int main() {
	Unit Unit1(10), Unit2(5), Unit3(5);

	Unit3 = Unit1 + Unit2;
	cout << "Unit3 : " << Unit3.GetHP() << endl;
}
