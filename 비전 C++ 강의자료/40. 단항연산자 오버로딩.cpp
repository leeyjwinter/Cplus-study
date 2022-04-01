#include <iostream>

using namespace std;

class Unit {
private:
	int hp;

public:
	Unit() { hp = 0; }
	Unit(int i) { hp = i; }

	int GetHP() { return hp; }

	Unit operator++() {
		hp++;
		return *this;
		//Unit temp;
		//temp.hp = ++hp;
		//return temp;

	};

	Unit operator++(int) {
		Unit temp;
		temp.hp = hp++;
		return temp;
	}
};

int main() {
	Unit Unit1, Unit2, Unit3(10);


	Unit1 = Unit3++;
	Unit2 = ++Unit3;

	cout << Unit1.GetHP() << "\n";
	cout << Unit2.GetHP() << "\n";
}