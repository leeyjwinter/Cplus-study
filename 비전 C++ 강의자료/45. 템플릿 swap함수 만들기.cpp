#include <iostream>

using namespace std;

template<typename T, typename Y>void generic_swap(T &a, Y &b) {
	T temp;
	temp = a;
	a = b;
	b = temp;
}

int main() {
	int a = 57, b = 2;
	cout << "a=" << a << " b=" << b << endl;
	generic_swap(a, b);
	cout << "after swap: a=" << a << " b=" << b << endl;

	double c = 5.7;
	float d = 2.3f;
	cout << "c=" << c << " d=" << d << endl;
	generic_swap(c, d);
	cout << "after swap: c=" << c << " d=" << d << endl;
}