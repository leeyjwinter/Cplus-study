#include <iostream>

using namespace std;

int main() {
	int* pInteger = NULL;
	pInteger = new int;

	if (!pInteger) {
		cout << "Allocation Fail\n";
		return -1;
	}

	*pInteger = 777;
	cout << "pInteger = " << pInteger << "*pInteger = " << "\n";

	delete pInteger;

	return 0;
}