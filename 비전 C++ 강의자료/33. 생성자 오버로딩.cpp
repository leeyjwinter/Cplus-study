#include <iostream>

using namespace std;

class Unit {
private:
	int level,type;

public:
	Unit() {
		level = 0; type = 0;
	}

	Unit(int n) {
		level = n;
		type = 0;
	}

	Unit(int n, int m) {
		level = n;
		type = m;
	}
	int GetLevel() {
		return level;
	}

	int GetType() {
		return type;
	}
};

int main() {
	Unit A[4];
	Unit B[4] = { 1,2,3,4 };
	Unit C[4] = { {1,2},{3,4},{5,6},{7,8} };

	for (int i = 0; i < 4; i++) {
		cout << "A[" << i << "] : " << "level = " << A[i].GetLevel() << " type = " << A[i].GetType() << "\n";
		cout << "B[" << i << "] : " << "level = " << B[i].GetLevel() << " type = " << B[i].GetType() << "\n";
		cout << "C[" << i << "] : " << "level = " << C[i].GetLevel() << " type = " << C[i].GetType() << "\n";
	}
}