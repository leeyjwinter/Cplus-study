#include <iostream>

using namespace std;

struct Student {
	int id;
	float grade;
	int gender;
};

int main() {
	struct Student st;
	cout << "학번을 입력하세요\t";
	cin >> st.id;

	cout << "성적을 입력하세요\t";
	cin >> st.grade;

	cout << "성별을 입력하세요(남자:1, 여자:2)\t";
	cin >> st.gender;

	cout << "\n\n";
	cout << "입력하신 학생의\n";
	cout << "학번은 " << st.id << "\n";

	cout.setf(ios::showpoint);
	cout.precision(2);

	cout << "성적은" << (float)st.grade << "\n";
	cout << "성별은" << (st.gender == 1 ? "남자" : "여자") << "\n";
	cout << "입니다\n";

}