#include <iostream>

using namespace std;

//절댓값 출력 함수
template <typename T>
T user_abs(T a) {
	T ret;
	ret = a < 0 ? -a : a;
	cout << "processing abs : " << ret << endl;
	return ret;
}

int main() {
	int x1 = 10;
	float x2 = -10.1f;
	double x3 = -2.3;

	user_abs(x1);
	user_abs(x2);
	user_abs(x3);

	return 0;

}