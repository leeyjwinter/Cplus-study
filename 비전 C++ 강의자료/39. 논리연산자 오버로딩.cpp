#include <iostream>

using namespace std;

class Unit {
private:
	int hp;

public:
	Unit() { hp = 0; }
	Unit(int i) { hp = i; }

	int GetHP() { return hp; }

	int operator!=(Unit right);

};

int Unit::operator!=(Unit right) {
	if (hp != right.hp) {
		return 1;
	}
	return 0;
}

int main() {
	Unit Unit1(10), Unit2(5), Unit3(5);

	if (Unit1 != Unit2)
		cout << "Unit1 != Unit2\n";
	else
		cout << "Unit1 == Unit2\n";

	if (Unit2 != Unit3)
		cout << "Unit2 != Unit3\n";
	else
		cout << "Unit2 == Unit3\n";
}
