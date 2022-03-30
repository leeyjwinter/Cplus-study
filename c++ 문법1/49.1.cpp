#include <iostream>

using namespace std;

int main() {

	//
	//int a = 10과 동일 표현
	int a(10);//c++ style
	int b(a + 5);

	// a(5);와 같은 식의 정의는 불가(함수인지 변수인지 구별이 안되기 때문)

	cout << "a = " << a << endl;
	cout << "b = " << b;



}

