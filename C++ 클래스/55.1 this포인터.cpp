//this ��ü �ڽ��� ����Ű�� ������

#include <iostream>
using namespace std;

class MyClass {
public:
	void PrintThis() {
		cout << "���� �ּҴ� " << this << endl;
	}

	//this ���� Ŭ������ ��ü�� �ּڰ� �޾ƿ���
	void PrintAddress(MyClass* ptr) {
		cout << "���� �ּҴ� " << ptr << endl;

	}

	//�޸� �󿡼� �Լ��� ��� ��ü �ۿ� ������, this�����͸� ���� ����Ű�� ��ü�� �޾ƿ��� ����
	//��� struct,class�� ������ ������ this��� �����͸� �Ű������� ������ ����
};

int main() {
	MyClass a, b;

	cout << "a�� �ּҴ� " << &a << endl;
	cout << "b�� �ּҴ� " << &b << endl;

	a.PrintThis();
	a.PrintAddress(&a);
	//���� ���� ����

	b.PrintThis();
	
}
