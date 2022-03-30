//71강 
//묵시적(암시적) 형변환 implicit conversion
//명시적 형변환 explicit conversion

#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <string>

using namespace std;

class Item {
public:
	Item(int num) : num(num) { //변환 생성자
		cout << "Item(int)" << endl;
	}

	Item(string name) : name(name) {
		cout << "Item(string)" << endl;
	}

	Item(int num, string name) : num(num), name(name) {
		cout << "Item(int, string)" << endl;
	}

	void print(){
		cout << num << ":" << name << endl;
		}

private:
	int num;
	string name;

};

int main() {
	Item i1 = Item(1);
	Item i2(2);

	//1. 묵시적 형변환
	Item i3 = 3;
	i3 = 3;//(이동 대입연산자가 호출됨) , Item &Item::operator=(Item &&)
	//3을 item으로 바꿔주는 과정에서 임시객체 생성되고, 이동생성자를 통해 i3로 들어감 

	//2. 명시적 형변환
	Item i4 = (Item)4;//4를 item형으로 형변환을 해줄수 있는 것을 생성자가 가지고 있음

	Item i5 = 5;
	i5 = string("stone"); //or (string)"stone" 으로 string으로 형변환 후 i5에 이동생성자로 할당

	Item i6(1, "grass");
	Item i7 = { 2, "dirt" };
	i7 = { 2,"dirt" };//묵시적 형변환
	Item i8{ 3, "wood" };


	i1.print();
	i2.print();
	i3.print();
	i4.print();
	i5.print();
	i6.print();
	i7.print();
	i8.print();
}

