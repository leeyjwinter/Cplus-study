#include <iostream>
#include <string>

using namespace std;

int main() {
	//���ڿ��� �迭 ���°� �ƴ� ������ ������
	string str;
	str = "Hello";

	//�� ���ڿ� ��� ����
	str = "sklfdjsldfkjsldkfjlsdfjlksdflsjdklflks";

	//string�� ��ġ�� �ξ� ����
	string name;
	cout << "�̸� �Է� : ";
	cin >> name;
	string message = "�ȳ��ϼ���, " + name + "��";
	cout << message << endl;
}
