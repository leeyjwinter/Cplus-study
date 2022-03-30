#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

using namespace std;

class Unit {
public:

	Unit() {
		cout << "�⺻ ������" << endl;
		str = NULL;
	}

	Unit(const char* agStr)
	{
		cout << "�Ű������� ���� �⺻ ������" << endl;
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
		cout << "���� ������" << endl;
		str = new char[strlen(agUnit.str) + 1];
		strcpy(str, agUnit.str);
	}

	void copyFrom(Unit& agUnit) {
		str = agUnit.str;
	}

	void copyTo(Unit& agUnit) {
		agUnit. str = str;
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