#include <iostream>

using namespace std;

template<typename T, typename Y>T avg(T a, Y b) {
	T ret = (a + b) / 2;
	cout << "avg = " << ret << endl;
	return ret;
}

int main() {
	int x1 = 3;
	int x2 = 0;
	float x3 = 4.12f;

	avg(x1, x2);
	avg(x2, x3);
	avg(x3, x2);

}