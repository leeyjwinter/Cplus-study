#include <iostream>
using namespace std;

int main() {
	{
		float concentration = 0;
		float real_concentration = 0;

		concentration = (30 / 40) * 100;
		cout << "Weight percent = " << concentration << "\n";

		real_concentration = (float)30 / 40 * 100;
		cout << "Real Weight percent = " << real_concentration << "\n"
	}
}