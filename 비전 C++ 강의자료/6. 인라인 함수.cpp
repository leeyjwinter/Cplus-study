#include <iostream>

using namespace std;

inline int inc(int x) {
	return x + 1;
}
int main() {
	cout << inc(1) << endl;
}