#include <iostream>

using namespace std;

class Student {
	int Year;
	int ID;
	int Grade;

public:
	Student(int Year, int iD, int grade) : Year(Year), ID(iD), Grade(grade) {}
	void showData() {
		cout << "Year : " << Year << ", ID: " << ID << ", Grade : " << Grade;
	}
};

int main() {
	Student s(2017, 100100, 1);
	s.showData();
}