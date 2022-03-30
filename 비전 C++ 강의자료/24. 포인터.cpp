#include <iostream>

using namespace std;

int main() {
	int number = 45;
	int* pNumber = NULL;

	pNumber = &number;

	cout << "Address of Number" << pNumber << "\n";
	cout << "Value of Number" << number << "\n";
}