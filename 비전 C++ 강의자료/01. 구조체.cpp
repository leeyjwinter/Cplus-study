#include <iostream>

using namespace std;

struct Student {
	int id;
	float grade;
	int gender;
};

int main() {
	struct Student st;
	cout << "�й��� �Է��ϼ���\t";
	cin >> st.id;

	cout << "������ �Է��ϼ���\t";
	cin >> st.grade;

	cout << "������ �Է��ϼ���(����:1, ����:2)\t";
	cin >> st.gender;

	cout << "\n\n";
	cout << "�Է��Ͻ� �л���\n";
	cout << "�й��� " << st.id << "\n";

	cout.setf(ios::showpoint);
	cout.precision(2);

	cout << "������" << (float)st.grade << "\n";
	cout << "������" << (st.gender == 1 ? "����" : "����") << "\n";
	cout << "�Դϴ�\n";

}