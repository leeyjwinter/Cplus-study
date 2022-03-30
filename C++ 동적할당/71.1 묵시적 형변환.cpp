//71�� 
//������(�Ͻ���) ����ȯ implicit conversion
//����� ����ȯ explicit conversion

#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <string>

using namespace std;

class Item {
public:
	Item(int num) : num(num) { //��ȯ ������
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

	//1. ������ ����ȯ
	Item i3 = 3;
	i3 = 3;//(�̵� ���Կ����ڰ� ȣ���) , Item &Item::operator=(Item &&)
	//3�� item���� �ٲ��ִ� �������� �ӽð�ü �����ǰ�, �̵������ڸ� ���� i3�� �� 

	//2. ����� ����ȯ
	Item i4 = (Item)4;//4�� item������ ����ȯ�� ���ټ� �ִ� ���� �����ڰ� ������ ����

	Item i5 = 5;
	i5 = string("stone"); //or (string)"stone" ���� string���� ����ȯ �� i5�� �̵������ڷ� �Ҵ�

	Item i6(1, "grass");
	Item i7 = { 2, "dirt" };
	i7 = { 2,"dirt" };//������ ����ȯ
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

