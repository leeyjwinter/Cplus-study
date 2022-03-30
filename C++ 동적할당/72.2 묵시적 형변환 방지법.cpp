//72.2�� 
//explicit�� �޾� ����� ����ȯ�� ����ϵ��� �ϴ� ��� 

#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <string>

using namespace std;

class Item {
public:
	explicit Item(int num) : num(num) { //��ȯ ������, ������ ��ȯ�� ���
		cout << "Item(int)" << endl;
	}

	Item(string name) : name(name) {//��ȯ ������
		cout << "Item(string)" << endl;
	}

	Item(int num, string name) : num(num), name(name) {
		cout << "Item(int, string)" << endl;
	}

	//����ȯ ������ �����ε�
	explicit operator int() const {//��ȯ ���� �ڿ� ������ , ����ȯ �߿� ��ü ���� �ȹٲ۴ٴ� �ǹ̷� const
		return num;
	}

	//string ������ ����ȯ ������ �����ε�
	operator string() const {
		string str = to_string(num) + " : " + name;//������ ���� ���ڿ� ���·� �ٲ���
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
	int itemNum = (int)i8;//����� ����ȯ
	//int itemNum2 = i7;//������ ����ȯ�� ������

	println((string)i8); //i8�� �����ε��� string�����ڸ� ���� string ������ �ϸ鼭 ȣ��, ����� ����ȯ
	println(i8);//������ ����ȯ, ������ ���� �Լ�ó�� println�� int���� ���� �� �ִٸ�
	//i8�� int ���� string���� ������ �𸣹Ƿ� ��������� �������
}

