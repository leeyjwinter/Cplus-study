#include <iostream>

using namespace std;

class Unit {
private: 
	int hp;

public:
	Unit() { hp = 0; }
	Unit(int i) { hp = i; }

	int GetHP() { return hp; }

	Unit operator-(Unit right);



};

Unit Unit::operator-(Unit right) {
	Unit temp;
	temp.hp = hp - right.hp;
	return temp;
}

int main() {
	Unit Unit1(10), Unit2(5), Unit3;
	Unit3 = Unit1 - Unit2;

	cout << "Unit1 hp : " << Unit1.GetHP() << endl;
	cout << "Unit2 hp : " << Unit2.GetHP() << endl;
	cout << "Unit3 hp : " << Unit3.GetHP() << endl;
}

