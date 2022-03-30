//this 객체 자신을 가리키는 포인터

#include <iostream>
using namespace std;

class MyClass {
public:
	void PrintThis() {
		cout << "나의 주소는 " << this << endl;
	}

	//this 없이 클래스의 객체의 주솟값 받아오기
	void PrintAddress(MyClass* ptr) {
		cout << "나의 주소는 " << ptr << endl;

	}

	//메모리 상에서 함수는 사실 객체 밖에 존재함, this포인터를 통해 가리키는 객체를 받아오기 쉬움
	//모든 struct,class는 보이지 않지만 this라는 포인터를 매개변수로 가지고 있음
};

int main() {
	MyClass a, b;

	cout << "a의 주소는 " << &a << endl;
	cout << "b의 주소는 " << &b << endl;

	a.PrintThis();
	a.PrintAddress(&a);
	//둘이 같은 역할

	b.PrintThis();
	
}
