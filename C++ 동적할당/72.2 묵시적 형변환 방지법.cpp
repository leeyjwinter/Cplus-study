//72.2강 
//explicit을 달아 명시적 형변환만 허용하도록 하는 기법 

#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <string>

using namespace std;

class Item {
public:
	explicit Item(int num) : num(num) { //변환 생성자, 묵시적 변환만 허용
		cout << "Item(int)" << endl;
	}

	Item(string name) : name(name) {//변환 생성자
		cout << "Item(string)" << endl;
	}

	Item(int num, string name) : num(num), name(name) {
		cout << "Item(int, string)" << endl;
	}

	//형변환 연산자 오버로딩
	explicit operator int() const {//반환 형을 뒤에 적어줌 , 형변환 중에 객체 내용 안바꾼다는 의미로 const
		return num;
	}

	//string 으로의 형변환 연산자 오버로딩
	operator string() const {
		string str = to_string(num) + " : " + name;//정수형 등을 문자열 형태로 바꿔줌
		return str;
	}

	void print() {
		cout << num << ":" << name << endl;
	}

private:
	int num;
	string name;

};

void println(string s) {
	cout << s << endl;
}

void println(int n) {
	cout << n << endl;
}

int main() {
	Item i8 = { 3, "wood" };
	Item i7 = (2, string("grass"));
	i7 = { 2, "dirt" };
	int itemNum = (int)i8;//명시적 형변환
	//int itemNum2 = i7;//묵시적 형변환이 오류남

	println((string)i8); //i8을 오버로딩된 string연산자를 통해 string 형으로 하면서 호출, 명시적 형변환
	println(i8);//묵시적 형변환, 하지만 위의 함수처럼 println이 int값도 받을 수 있다면
	//i8이 int 인지 string으로 가는지 모르므로 명시적으로 해줘야함
}

