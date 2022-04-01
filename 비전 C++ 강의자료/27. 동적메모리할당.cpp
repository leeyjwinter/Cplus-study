#include <iostream>

using namespace std;
class Unit {
	int x, y;
public:
	Unit(int x, int y) : x(x), y(y) {}
	void Print() {
		cout << x << "," << y << "\n";
	}
};



	
int main() {
	int* pInteger = NULL;
	pInteger = new int;

	if (!pInteger) {
		cout << "Allocation Fail\n";
		return -1;
	}

	*pInteger = 777;
	cout << "pInteger = " << pInteger << " *pInteger = " << *pInteger << "\n";

	delete pInteger;

	Unit* pUnit = new Unit(1, 2);
	pUnit->Print();
	delete pUnit;

}