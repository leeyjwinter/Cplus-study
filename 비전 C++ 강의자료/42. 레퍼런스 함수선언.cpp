#include <iostream>

using namespace std;

double vals[] = { 1,2,3,4,5 };

double& setValues(int i) {
	return vals[i];
}

int main() {
	for (int i = 0; i < 5; i++) 
		cout << vals[i] << endl;
	setValues(1) = 6;

	for (int i = 0; i < 5; i++)
		cout << vals[i] << endl;
	
}