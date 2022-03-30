#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

using namespace std;

class Unit {
public:

	Unit() {
		cout << "기본 생성자" << endl;
		str = NULL;
	}

	Unit(const char* agStr)
	{
		cout << "매개변수를 가진 기본 생성자" << endl;
		int strLength = strlen(agStr);
		str = new char[strLength + 1];
		strcpy(str, agStr);
	}

	void set(const char* agStr) {
		strcpy(str, agStr);
	}

	void show() {
		cout << str << "\n";
	}

	Unit(Unit& agUnit) {
		cout << "복사 생성자" << endl;
		str = new char[strlen(agUnit.str) + 1];
		strcpy(str, agUnit.str);
	}

	void copyFrom(Unit& agUnit) {
		str = new char[strlen(agUnit.str) + 1];
		strcpy(str, agUnit.str);
	}

	void copyTo(Unit& agUnit) {
		agUnit.str=new char[strlen(str) + 1];
		strcpy(agUnit.str, str);
	}
private:
	char* str;
};

int main() {
	Unit A("Unit A"), B("Unit B"), C("Unit C");
	A.show(); B.show(); C.show();
	cout << endl;

	A.copyFrom(B);
	C.copyTo(B);

	A.show(); B.show(); C.show();
	cout << endl;

	B.set("Unit B");

	A.show(); B.show(); C.show();
	cout << endl;

	A.set("Unit A");

	A.show(); B.show(); C.show();
	cout << endl;
}