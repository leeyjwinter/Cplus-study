#define _CRT_SECURE_NO_WARNINGS
#define MAX_LEN 255
#include <iostream>


using namespace std;

class Unit {
	char* pszName;
public:
	Unit() {
		pszName = new char[MAX_LEN];
		cout << "Normal Constructor\n";
	}
	~Unit() {
		delete[] pszName;
	}

	Unit(const Unit& unit);

	void Print() {
		cout << pszName << "\n";
	}

	void Set(const char* pszIn) {
		strcpy(pszName, pszIn);
	}
};

Unit::Unit(const Unit& unit) {
	pszName = new char[MAX_LEN];
	strcpy(pszName, "Untitled");
	cout << "Copy Constructor\n";
}
int main() {
	Unit Zerg,Spawn;
	Zerg.Set("zergling");
	Zerg.Print();

	Spawn = Zerg;
	Spawn.Print();
}