#include <iostream>
using namespace std;

int Add(int arg1, int arg2) {
	cout << "int Add" << endl;
	return arg1 + arg2;
}

double Add(double arg1, double arg2) {
	cout << "double Add" << endl;
	return arg1 + arg2;
}

double Add(int arg1, double arg2) {
	cout << "double Int Add" << endl;
	return arg1 + arg2;
}

void main() {
	cout << Add(1, 1) << endl; 
	cout << Add(1.0 , 1.0) << endl;
	cout << Add(1 , 1.0) << endl;
}