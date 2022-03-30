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
private:
	char* str;
};

int main() {
	Unit A("Test1");
	Unit B = A;

	cout << "----------------------------\n";
	A.set("Test2");

	cout << "A's str = : ";
	A.show();
	cout << "B's str = : ";
	B.show();
}