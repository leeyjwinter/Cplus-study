#include <iostream>
using namespace std;

float calculateCircle(int radius) {
	return 3.14 * radius * radius;
}

int main() {
	int min, max, radius;
	cout << "Enter Min (1~10) : ";
	cin >> min;
	cout << "Enter Max (Min~10) : ";
	cin >> max;

	for (int i = min; i < max + 1; i++) {
		cout << "Radius " << i << "=3.14x" << i << "x" << i << "=" << calculateCircle(i) << "\n";
	}


}