//56강
//생성자: 객체가 생성될 때 자동으로 호출되는 함수
//소멸자: 객체가 소멸될 때 자동으로 호출되는 함수

#include <iostream>

using namespace std;

class MyClass {
public:
	MyClass() { // 생성자
		cout << "생성자가 호출되었다!!" << endl;
	}

	~MyClass() {//소멸자
		cout << "소멸자가 호출되었다!" << endl;
	}
};

//MyClass globalObj;//메인함수 호출 이전에 전역 객체가 생성되면서 생성자 호출됨


void testLocalObj() {
	cout << "testlocalObj 함수 시작!" << endl;
	MyClass localObj;
	cout << "testlocalObj 함수 끝!" << endl;
}

int main() {
	cout << "main 함수 시작!" << endl;
	testLocalObj();
	cout << "main 함수 끝!" << endl;
	//지역이 끝나면 localObj의 소멸자가 호출됨
	
}

//main이 끝나고 소멸자가 호출됨


