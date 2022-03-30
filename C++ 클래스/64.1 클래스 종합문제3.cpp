//실행결과 예측

#include <iostream>

using namespace std;

class MyClass {
public:
	MyClass() : num(cnt++), ch('\0'){}//myclass 객체가 생성될 때마다 num에 cnt넣고 cnt 증가하는 식

	void Check(MyClass* ptr) {
		if (ptr + num == this) {
			cout << num << endl;
		}
	}

	static int cnt;
private:
	int num;
	char ch;
};
int MyClass::cnt = 0;

int main() {
	MyClass obj[5];

	cout << "Test #1 : " << endl;
	for (int i = 0; i < 5; i++) {
		obj[i].Check(obj);
	}
	cout << "Test #2 : " << endl;
	for (MyClass& i : obj) {
		i.Check(obj);
	}
	cout << "cnt = " << MyClass::cnt << endl;
} 