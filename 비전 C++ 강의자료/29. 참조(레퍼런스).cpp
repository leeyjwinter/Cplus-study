#include <iostream>
using namespace std;

void swap(int x, int y) {
	int t;
	t = x;
	x = y;
	y = t;
}

void pointerSwap(int *x, int *y) {
	int t;
	t = *x;
	*x =*y;
	*y = t;
}

void referenceSwap(int& x, int& y) {
	int t;
	t = x;
	x = y;
	y = t;

}

int main() {
	int i = 4;
	int j = 7;
	cout << "i: " << i << " j : "<< j << endl;
	swap(i, j);
	cout << "i: " << i << " j : " << j << endl;

	cout << "i: " << i << " j : " << j << endl;
	pointerSwap(&i, &j);
	cout << "i: " << i << " j : " << j << endl;

	cout << "i: " << i << " j : " << j << endl;
	referenceSwap(i, j);
	cout << "i: " << i << " j : " << j << endl;

}